        identification division.
        program-id. gc-debugger.
        
        environment division.
        configuration section.
        input-output section.
        file-control.
      *      select cobfile assign to cobfile-path
      *          organization is line sequential
      *          file status is cobfile-status.
                
            select bp-file assign to bp-path
                organization is line sequential
                file status is bp-file-status.
                
            select log-file assign to log-file-path
                organization is line sequential
                file status is log-file-status.

        data division.
        
        file section.
      *      fd cobfile.
      *          01 cobfile-line         pic x(100).
                
            fd  bp-file.
                01 bp-line             pic x(40).
                
            fd  log-file.
                01 log-line             pic x(512).
        
        working-storage section.
            copy screenio.
            
      ***************************************************************
      ** Constants                                                 **
      ***************************************************************
            78 MAX-ROWS value 19.
            78 MAX-ROW-LENGTH value 84.
            
            77 GETLINE              pic x(128) value "get_aniline".
            77 GETLINECOUNT         pic x(128) value "get_linecount".
            77 ANIDATA              pic x(128) value "anidata".
            
            
      ***************************************************************
      ** General flags, management data                            **
      ***************************************************************
            77 global-init-flag             pic 9 value 0.
            77 module-init-flag             pic 9 value 0.
            
            77 active-line                  pic 9(5) value 0.
            77 active-line-onscreen         pic 99 value 0.
            
            77 call-depth                   pic 9(6) value 0.
            
      *     Saves the run mode:
      *     N... Normal
      *     G... Go (till end or breakpoint)
            77 run-mode                     pic x value 'N'.
            
            77 cob-anim-logging             pic x(1).

      ***************************************************************
      ** Structures (Data, Screen, ... )                           **
      ***************************************************************
            
            77 lines-set                pic 9(02) value 20.
            01 codelines-data.
                04 codeline occurs 5 to 50 depending on lines-set.
                    05 linenumber       pic 9(5).
                    05 sourceline       pic x(77).
                    
            01 cobfile-status           pic 99.
            01 cobfile-path             pic x(256).
            
            01 log-file-status          pic 99.
            01 log-file-path            pic x(256) 
                                        value "gc-debugger.log".
            
            77 VV-NAME                  pic x(10) value "Varname:".
            77 VV-USAGE                 pic x(10) value "Usage:".
            77 VV-SIZE                  pic x(10) value "Length:".
            77 VV-CONTENT               pic x(10) value "Data:".
            
            77 EMPTYLINE                pic x(2100) value spaces.
            
                    
      ***************************************************************
      ** Screen variables (lines, positions, ... )                 **
      ***************************************************************            
            01 line-cursor-position     pic 99 value 1.
            01 module-line-count        pic 9(5) value 0.
            01 goto-linenumber          pic 9(5).

            
      ***************************************************************
      ** Key input processing                                      **
      ***************************************************************
            01 inp-crt-status           pic 9(4).
            
      ***************************************************************
      ** Buffers and temporary used fields                         **
      ***************************************************************
            01 tmp-command-input-buffer     pic x(70).
            01 tmp-unstring-buffer          pic x(256).
            01 tmp-unstring-ptr             pic 9(3).
            01 tmp-line-position            pic 99.
            01 tmp-source-line-buffer       pic x(512).
            01 tmp-linenumber               pic 9(5).
            01 tmp-linenumber-2             pic 9(5).
            01 tmp-linenumber-3             pic 9(5).
            01 tmp-number                   pic 9(5).
            01 tmp-number-2                 pic 9(5).
            01 tmp-onscreen-linenumber      pic 99.
            01 tmp-onscreen-linenumber-2    pic 99.
            01 tmp-linenumber-bin           usage binary-long.
            01 tmp-counter                  pic 9(5).
            01 tmp-cobol-src-name           pic x(30).
            01 tmp-bp-src-name              pic x(30).
            01 tmp-bp-src-line              pic 9(5).
            01 tmp-log-line                 pic x(512).
            
      ***************************************************************
      ** Variables for breakpoint management                       **
      ***************************************************************
            77 bp-wp-init-flag                    pic 9.
      * last used line in breakpoint table 
            77 bp-next-line                       pic 9(5).
      * last used line in watchpoint table 
            77 wp-last-line                       pic 9(5). 
       
      * line number for delete-breakpoint
            77 bp-delete-src-line                 pic 9(5).
            77 bp-check-src-line redefines bp-delete-src-line pic 9(5).
            77 bp-add-src-line redefines bp-delete-src-line   pic 9(5).

      * src-name for delete, add, check breakpoint
            77 bp-delete-src-name                             pic x(30).
            77 bp-check-src-name redefines bp-delete-src-name pic x(30).
            77 bp-add-src-name redefines bp-delete-src-name   pic x(30).
       
            77 is-breakpoint-flag                 pic 9 value 0.
       
      * temporary variable for one record
            77 bp-wp-temp-record                  pic x(40).
       
            01  bp-file-info.
                03  bp-path                       pic x(256).
                03  bp-file-status                pic 99.
            01  bp-line-counter                   pic 9(4).
            01  bp-amount                         pic 9(4) value 1000.
       
      * breakpoint table with max. 1000 breakpoints
            01 breakpoint-lst.
                05  bp-line-struct occurs 0 TO 1000
                              depending on bp-amount,
                              ascending key bp-src-name, 
                                            bp-src-line, 
                              indexed by bp-index.
                    10  bp-src-name                 pic x(30).
                    10  bp-src-line                 pic 9(5).
           
      * watchpoint table with max. 1000 watchpoints
            01 watchpoint-lst. 
                05 wp-line-struct occurs 1000.
                    10 wp-src-name                    pic x(30).
                    10 wp-var-name                    pic x(50).
                    
      ***************************************************************
      ** Variables for string-contains                             **
      ***************************************************************
            01 string-contains-flag             pic 9 value 0.
            01 string-contains-str1             pic x(256).
            01 string-contains-str2             pic x(256).

        linkage section.
            01  interface-block.
               03  anim-state                    pic x.
               03  cobol-src-name                pic x(30).
               03  first-stmt-if                 pic 9(6).
      *        current line is the line on which the cursor resides
      *        will be same as active line during animation
      *        but will differ when scrolling through the file
               03  current-line-if               pic 9(6).
      *        active line is the line that will be executed in the file
               03  active-line-if                pic 9(6).
               03  no-code-lines-if              pic 9(6).
               03  dtf-line                      pic 9(6).
               03  dtf-usage                     pic 99.
               03  dtf-length                    pic 999.
               03  dtf-value                     pic x(280).
               
            01  anim-stmt-type                   pic x.
            
            
        screen section.
            01 animator-screen.
                03 headline pic x(60)
                   BACKGROUND-COLOR COB-COLOR-BLACK
                   FOREGROUND-COLOR COB-COLOR-WHITE
                   LINE 1
                   COL 10.
                03 codelines
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                   .
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 2 USING linenumber (01).
                        05 filler pic x(74)
                            COL 7 LINE 2 USING sourceline (01).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 3 USING linenumber (02).
                        05 filler pic x(74)
                            COL 7 LINE 3 USING sourceline (02).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 4 USING linenumber (03).
                        05 filler pic x(74)
                            COL 7 LINE 4 USING sourceline (03).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 5 USING linenumber (04).
                        05 filler pic x(74)
                            COL 7 LINE 5 USING sourceline (04).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 6 USING linenumber (05).
                        05 filler pic x(74)
                            COL 7 LINE 6 USING sourceline (05).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 7 USING linenumber (06).
                        05 filler pic x(74)
                            COL 7 LINE 7 USING sourceline (06).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 8 USING linenumber (07).
                        05 filler pic x(74)
                            COL 7 LINE 8 USING sourceline (07).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 9 USING linenumber (08).
                        05 filler pic x(74)
                            COL 7 LINE 9 USING sourceline (08).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 10 USING linenumber (09).
                        05 filler pic x(74)
                            COL 7 LINE 10 USING sourceline (09).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 11 USING linenumber (10).
                        05 filler pic x(74)
                            COL 7 LINE 11 USING sourceline (10).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 12 USING linenumber (11).
                        05 filler pic x(74)
                            COL 7 LINE 12 USING sourceline (11).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 13 USING linenumber (12).
                        05 filler pic x(74)
                            COL 7 LINE 13 USING sourceline (12).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 14 USING linenumber (13).
                        05 filler pic x(74)
                            COL 7 LINE 14 USING sourceline (13).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 15 USING linenumber (14).
                        05 filler pic x(74)
                            COL 7 LINE 15 USING sourceline (14).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 16 USING linenumber (15).
                        05 filler pic x(74)
                            COL 7 LINE 16 USING sourceline (15).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 17 USING linenumber (16).
                        05 filler pic x(74)
                            COL 7 LINE 17 USING sourceline (16).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 18 USING linenumber (17).
                        05 filler pic x(74)
                            COL 7 LINE 18 USING sourceline (17).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 19 USING linenumber (18).
                        05 filler pic x(74)
                            COL 7 LINE 19 USING sourceline (18).
                    04 filler.
                        05 filler pic 9(5)
                            COL 1 LINE 20 USING linenumber (19).
                        05 filler pic x(74)
                            COL 7 LINE 20 USING sourceline (19).

                03 line-cursor pic x value '>'
                        BACKGROUND-COLOR COB-COLOR-BLACK
                        FOREGROUND-COLOR COB-COLOR-WHITE
                        LINE line-cursor-position
                        COL 6.
                        
                03 command-input-line pic x(50) 
                    BACKGROUND-COLOR COB-COLOR-BLACK
                    FOREGROUND-COLOR COB-COLOR-WHITE
                    LINE 23
                    COL 1.
                            
                03 footline
                    BACKGROUND-COLOR COB-COLOR-BLACK.
                    04 func1 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 1.
                    04 func2 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 11.
                    04 func3 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 21.
                    04 func4 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 31.
                    04 func5 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 41.
                    04 func6 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 51.
                    04 func7 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 61.
                    04 func8 pic x(8)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 25
                        COL 71.

                03 footline-2
                    BACKGROUND-COLOR COB-COLOR-BLACK.
                    04 func1-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 1.
                    04 func2-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 11.
                    04 func3-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 21.
                    04 func4-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 31.
                    04 func5-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 41.
                    04 func6-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 51.
                    04 func7-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 61.
                    04 func8-2 pic x(2)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 24
                        COL 71.            

            01 view-variable-screen.
                03 headline-vv pic x(80)
                    BACKGROUND-COLOR COB-COLOR-BLACK
                    FOREGROUND-COLOR COB-COLOR-WHITE
                    LINE 1
                    COL 1.
                03 name-vv.
                    04 name-vv-head pic x(10)
                        BACKGROUND-COLOR COB-COLOR-BLACK
                        FOREGROUND-COLOR COB-COLOR-WHITE
                        LINE 3
                        COL 1
                        USING VV-NAME.
                    04 name-vv-content pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 3
                        COL 12.
                03 usage-vv.
                    04 usage-vv-head pic x(10)
                        BACKGROUND-COLOR COB-COLOR-BLACK
                        FOREGROUND-COLOR COB-COLOR-WHITE
                        LINE 4
                        COL 1
                        USING VV-USAGE.
                    04 usage-vv-content pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 4
                        COL 12.                
                03 size-vv.
                    04 size-vv-head pic x(10)
                        BACKGROUND-COLOR COB-COLOR-BLACK
                        FOREGROUND-COLOR COB-COLOR-WHITE
                        LINE 5
                        COL 1
                        USING VV-SIZE.
                    04 size-vv-content pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 5
                        COL 12.                
                03 content-vv.
                    04 content-vv-head pic x(10)
                        BACKGROUND-COLOR COB-COLOR-BLACK
                        FOREGROUND-COLOR COB-COLOR-WHITE
                        LINE 6
                        COL 1
                        USING VV-CONTENT.
                    04 content-vv-l1 pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 6
                        COL 12.
                    04 content-vv-l2 pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 7
                        COL 12.
                    04 content-vv-l3 pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 8
                        COL 12.
                    04 content-vv-l4 pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 9
                        COL 12.
                    04 content-vv-l5 pic x(60)
                        BACKGROUND-COLOR COB-COLOR-WHITE
                        FOREGROUND-COLOR COB-COLOR-BLACK
                        LINE 10
                        COL 12.
                       
            01 empty-screen.
                03 filler pic x(2100) LINE 1 COL 1 using EMPTYLINE.

        procedure division using interface-block anim-stmt-type.
            perform process-interface-block.

            perform forever 
                accept tmp-command-input-buffer 
                line 23 col 10 end-accept

                perform process-function-key
                perform process-input-buffer
            end-perform

        stop run.
        
      ***************************************************************  
        do-initialization section.      
            if cob-anim-logging = 'Y'
                string "Do-Initialization, " delimited by size
                    "global-init-flag: " delimited by size 
                    global-init-flag delimited by size 
                    ", module-init-flag: " delimited by size
                    module-init-flag delimited by size
                    ", call-depth: " delimited by size
                    call-depth delimited by size                
                    into tmp-log-line
                end-string
                perform log-msg
            end-if

            if global-init-flag = 0 
                set environment 'COB_SCREEN_EXCEPTIONS' to 'Y'
                set environment 'COB_SCREEN_ESC' to 'Y'
                accept cob-anim-logging from environment 
                'COB_ANIM_LOGGING' end-accept 
                call "C$TOUPPER" using cob-anim-logging 
                by value 1 end-call
                if cob-anim-logging = 'Y'
                    open output log-file
                end-if
            end-if
            
            if module-init-flag = 0
                perform do-module-init
            end-if
            
            if global-init-flag = 0
                perform do-screen-init
            end-if
            
            if run-mode = 'N'
      *          call "C$SLEEP" using 20 end-call
                display animator-screen end-display
            end-if
            if bp-wp-init-flag not = 1
                perform read-in-breakpoints
                move 1 to bp-wp-init-flag
            end-if
            
            if run-mode = 'N'
                perform display-current-breakpoints
            end-if
            
            move 1 to global-init-flag.
            
      *      display "end do-init..." upon syserr end-display
            
            move 1 to return-code.
            if anim-stmt-type = 'X' or anim-stmt-type = '0'
                goback.
                
            continue.
       
      ***************************************************************  
        do-screen-init section.
            move "Funk 1" to func1.
            move "F1" to func1-2.
            move "Funk 2" to func2.
            move "F2" to func2-2.
            move "Funk 3" to func3.
            move "F3" to func3-2.
            move "Funk 4" to func4.
            move "F4" to func4-2.
            move "Step" to func5.
            move "F5" to func5-2.
            move "Step into" to func6.
            move "F6" to func6-2.
            move "Go" to func7.
            move "F7" to func7-2.
            move "Funk 8" to func8.
            move "F8" to func8-2.
                
            move "Command: " to command-input-line.
        
            continue.
            
      ***************************************************************
      
        do-module-init section.

            move spaces to GETLINE.
            move spaces to GETLINECOUNT.
            move spaces to ANIDATA.
        
            string "get_aniline_" delimited by size
                   cobol-src-name delimited by spaces
                into GETLINE
            end-string
            
            string "get_linecount_" delimited by size 
                   cobol-src-name delimited by spaces
                into GETLINECOUNT
            end-string
            
            string "anidata_" delimited by size 
                   cobol-src-name delimited by spaces
                into ANIDATA
            end-string

            call GETLINECOUNT end-call
            move return-code to module-line-count.
            
      *      call "C$SLEEP" using 20 end-call
            move spaces to codelines-data.
            
            string "GNU COBOL 2.0 Debugger  --  " delimited by size 
                cobol-src-name delimited by spaces
                into headline
            end-string
            
            move headline to headline-vv.
        
            perform varying tmp-linenumber from 1 by 1
                    until   tmp-linenumber > MAX-ROWS or 
                            tmp-linenumber > module-line-count
                    
                    move spaces to tmp-source-line-buffer
                    move tmp-linenumber to tmp-linenumber-bin
                    
                    call GETLINE using tmp-linenumber-bin 
                    tmp-source-line-buffer end-call
                    
                    move tmp-linenumber to linenumber(tmp-linenumber)
                    move tmp-source-line-buffer 
                        to sourceline(tmp-linenumber)
            end-perform

            move 1 to module-init-flag.
            
            continue.
            
      ***************************************************************
      
        process-function-key section.
            move COB-CRT-STATUS to inp-crt-status.
            
            evaluate inp-crt-status
                when 1005 perform do-single-step
                when 1006 perform do-step-into
                when 1007 perform do-go
                when 2005 perform quit-debugger
                when 2001 perform page-up
                when 2002 perform page-down
                when 2003 perform line-up
                when 2004 perform line-down
            end-evaluate
            
            continue.

      ***************************************************************  
        process-function-key-vv section.
            move COB-CRT-STATUS to inp-crt-status.
            
            evaluate inp-crt-status
                when 1001 perform goback-from-vv
                when 2005 perform quit-debugger
            end-evaluate
            
            continue.
            
      ***************************************************************
        process-input-buffer section.
            call "C$TOUPPER" using tmp-command-input-buffer 
            by value 1 end-call
            
            evaluate tmp-command-input-buffer(1:1)
                when 'B' perform set-unset-breakpoint
                when 'G' perform goto-line
                when 'V' perform view-variable
            end-evaluate
        
            continue.
            
      ***************************************************************
        process-interface-block section.
            perform log-interface-block.
            
            move active-line-if to active-line.

            perform process-interface-block-count-depth.
            
            if run-mode = 'N'
                if cob-anim-logging = 'Y'
                    move "Normal mode step..." to tmp-log-line
                    perform log-msg
                end-if
                if anim-stmt-type = '0'
                        move 0 to module-init-flag
                        perform do-initialization
                else if anim-state = 'I' and module-init-flag = 0
                        perform do-initialization     
                        perform display-active-line
                     else if anim-state = 'X'
                              perform check-for-stop-run
                              goback
                          else 
                              display animator-screen end-display
                              perform display-active-line
                          end-if
                     end-if
                end-if
                
                perform check-for-stop-run             
            end-if
            
            if run-mode = 'G'
                if anim-stmt-type = '0'
                    move 0 to module-init-flag
                    perform do-initialization
                else if anim-state = 'I' and module-init-flag = 0 
                        perform do-initialization
                     end-if
                end-if
                if cob-anim-logging = 'Y'
                    move "Go mode step..." to tmp-log-line
                    perform log-msg
                end-if
                move cobol-src-name to bp-check-src-name
                move active-line to bp-check-src-line
                
                perform check-for-stop-run
                
                perform is-breakpoint
                            
                if cob-anim-logging = 'Y'
                    string "Checked for BP... " delimited by size 
                        bp-check-src-name delimited by size 
                        ";" delimited by size 
                        bp-check-src-line delimited by spaces
                        into tmp-log-line
                    end-string
                    perform log-msg
                end-if
                
                if is-breakpoint-flag = 1 
                    move 'N' to run-mode
      *              display "Breakpoint..." upon syserr end-display
                    display animator-screen end-display
                    perform display-active-line
                    perform display-current-breakpoints
                else
                    if cob-anim-logging = 'Y'
                        move "No BP, goback..." to tmp-log-line
                        perform log-msg
                    end-if
                    goback
                end-if
            end-if
            
            continue.
            
      ***************************************************************
        process-interface-block-count-depth section.
            if anim-state = 'X'
      *          if call-depth > 0 
      *              subtract 1 from call-depth end-subtract
      *          end-if
                move 0 to module-init-flag
            else if anim-stmt-type = 'P'
                    if cob-anim-logging = 'Y'
                        move "Perform/Call step..." to tmp-log-line
                        perform log-msg
                    end-if
      *              add 1 to call-depth end-add
                 end-if
            end-if
            
            continue.
      
      ***************************************************************
        display-active-line section.
            move active-line to goto-linenumber.
            move spaces to tmp-command-input-buffer.
            
            perform goto-line.
            
            add 1 to active-line-onscreen 
            giving tmp-onscreen-linenumber end-add
            
            display sourceline(active-line-onscreen)(1:74)
            line tmp-onscreen-linenumber col 7 
            with background-color COB-COLOR-GREEN end-display
            
            continue.
            
      ***************************************************************
        display-active-line-if-visible section.
            if active-line >= linenumber(1) 
                and active-line <= linenumber(MAX-ROWS)
                
                compute tmp-onscreen-linenumber = linenumber(MAX-ROWS) 
                - active-line end-compute
                add 1 to tmp-onscreen-linenumber 
                giving tmp-onscreen-linenumber-2 end-add

                display sourceline(tmp-onscreen-linenumber)(1:74)
                line tmp-onscreen-linenumber-2 col 7 
                with background-color COB-COLOR-GREEN end-display
                
            else if module-line-count <= MAX-ROWS
                    add 1 to active-line 
                    giving tmp-onscreen-linenumber-2 end-add
                
                    display sourceline(active-line)(1:74)
                    line tmp-onscreen-linenumber-2 col 7 
                    with background-color COB-COLOR-GREEN end-display
                end-if
            end-if
            
            continue.            
            
      ***************************************************************
        quit-debugger section.
            move "Möchten sie den Debugger beenden?" to 
            command-input-line.
            display command-input-line end-display
            display footline end-display
            
            move spaces to tmp-command-input-buffer.
            compute tmp-line-position = function length 
            ( function trim (command-input-line) ) + 2 end-compute
            
            accept tmp-command-input-buffer line 23 
            col tmp-line-position end-accept
            
            if function upper-case(tmp-command-input-buffer(1:1)) = 'J' 
            or function upper-case(tmp-command-input-buffer(1:1)) = 'Y'
                
                perform flush-breakpoints
      *          Doesn't work in GC 1.1
      *          display spaces upon crt end-display
                display empty-screen end-display
                stop run
            end-if
            
            move "Command: " to command-input-line.
            continue.
            
      ***************************************************************
        check-for-stop-run section.
            if active-line >= first-stmt-if
                move active-line to tmp-linenumber-bin
                
                if cob-anim-logging = 'Y'
                    string "check for stop run. " delimited by size 
                        active-line delimited by size 
                        ", " delimited by size
                        cobol-src-name delimited by size
                        ", " delimited by size
                        GETLINE delimited by size
                        into tmp-log-line
                    end-string
                    perform log-msg
                end-if
                    
                call GETLINE using tmp-linenumber-bin 
                tmp-source-line-buffer end-call
                
                move function upper-case(tmp-source-line-buffer) 
                    to string-contains-str1
                move "STOP RUN." to string-contains-str2
                
                perform string-contains
                
                if string-contains-flag = 1
                    perform flush-breakpoints
                end-if
            end-if
            
            continue.
      
      ***************************************************************
        do-single-step section.
            move 'N' to run-mode.
            goback.
            
      ***************************************************************
        do-step-into section.
            
            continue.
            
      ***************************************************************
        do-go section.
            move 'G' to run-mode.
            goback.
      
      ***************************************************************
        goto-line section.
            if module-line-count < MAX-ROWS
                move active-line to active-line-onscreen
                display space line line-cursor-position col 6 
                end-display
                add 1 to active-line giving line-cursor-position end-add
            else
                if tmp-command-input-buffer(1:1) = "G"
                    move 3 to tmp-unstring-ptr
                    unstring tmp-command-input-buffer delimited by " " 
                        into tmp-unstring-buffer
                        with pointer tmp-unstring-ptr
                    end-unstring
                    
                    move tmp-unstring-buffer to goto-linenumber
                end-if
            
                compute tmp-linenumber-2 = module-line-count - MAX-ROWS 
                end-compute
                
                divide MAX-ROWS by 2 giving tmp-number 
                end-divide
                move tmp-number to line-cursor-position
                
                if goto-linenumber > tmp-linenumber-2
                    compute goto-linenumber = module-line-count - 
                    tmp-number end-compute
                else if goto-linenumber < MAX-ROWS 
                        add 1 to tmp-number giving  goto-linenumber 
                        end-add
                     end-if
                end-if
                
                compute tmp-linenumber-2 = goto-linenumber - 
                tmp-number end-compute
                compute tmp-linenumber-3 = goto-linenumber + 
                tmp-number + 1 end-compute
                move 1 to tmp-counter

      *          display "mdlc: " module-line-count upon syserr end-display
      *          display "goto: " goto-linenumber upon syserr end-display
      *          display "start: " tmp-linenumber-2 upon syserr end-display
      *          display "end: " tmp-linenumber-3 upon syserr end-display
                
                perform varying tmp-linenumber 
                    from tmp-linenumber-2 by 1 
                    until tmp-linenumber = tmp-linenumber-3
                
                    move spaces to tmp-source-line-buffer
                    move tmp-linenumber to tmp-linenumber-bin
                    
                    call GETLINE using tmp-linenumber-bin 
                    tmp-source-line-buffer end-call
                    
                    move tmp-source-line-buffer 
                        to sourceline(tmp-counter)
                    move tmp-linenumber to linenumber(tmp-counter)
                    
                    if linenumber(tmp-counter) = goto-linenumber 
                        move tmp-counter to active-line-onscreen
                        display space line line-cursor-position col 6 
                        end-display
                        move tmp-counter to line-cursor-position
                    end-if
                
                    add 1 to tmp-counter end-add
                end-perform
                
            end-if
            
            display animator-screen end-display
            perform display-current-breakpoints.
        
            continue.
      
      ***************************************************************
        page-up section.
            compute goto-linenumber = linenumber(10) - MAX-ROWS 
            end-compute
            
            move spaces to tmp-command-input-buffer.
            
            perform goto-line.
            perform display-current-breakpoints.
            perform display-active-line-if-visible.
      
      *      if linenumber(1) > MAX-ROWS
      *          compute tmp-linenumber-2 = linenumber(1) - MAX-ROWS 
      *          end-compute
      *      else
      *          move 1 to tmp-linenumber-2
      *          move MAX-ROWS to linenumber(1)
      *      end-if
      *      
      *      move MAX-ROWS to tmp-counter.
      *      
      *      perform varying tmp-linenumber 
      *          from linenumber(1) by -1 
      *          until tmp-counter = 0
      *      
      *          move spaces to tmp-source-line-buffer
      *          move tmp-linenumber to tmp-linenumber-bin
      *          
      *          call GETLINE using tmp-linenumber-bin 
      *          tmp-source-line-buffer end-call
      *          
      *          move tmp-source-line-buffer to sourceline(tmp-counter)
      *          move tmp-linenumber to linenumber(tmp-counter)
      *      
      *          subtract 1 from tmp-counter end-subtract
      *      end-perform
      *      
      *      display animator-screen end-display
            
            continue.
            
      ***************************************************************
        page-down section.
            compute goto-linenumber = linenumber(10) + MAX-ROWS 
            end-compute
            
            move spaces to tmp-command-input-buffer.
            
            perform goto-line.
            perform display-current-breakpoints.
            perform display-active-line-if-visible.
        
      *      compute tmp-linenumber = module-line-count - MAX-ROWS 
      *      end-compute
       
      * If we use GC 2.0, we can use this evaluate statement
      * In GC 1.1 the when > and when <= doesn't work
      *      evaluate linenumber(MAX-ROWS)
      *          when module-line-count exit section
      *          when > tmp-linenumber
      *              move module-line-count to tmp-linenumber
      *          when <= tmp-linenumber
      *              compute tmp-linenumber = linenumber(MAX-ROWS) 
      *              + MAX-ROWS end-compute
      *      end-evaluate
      *      if linenumber(MAX-ROWS) = module-line-count
      *          exit section
      *      else if linenumber(MAX-ROWS) > tmp-linenumber
      *              move module-line-count to tmp-linenumber
      *           else if linenumber(MAX-ROWS) <= tmp-linenumber
      *                  compute tmp-linenumber = linenumber(MAX-ROWS)
      *                  + MAX-ROWS end-compute
      *                end-if
      *           end-if
      *      end-if
      *          
      *      move MAX-ROWS to tmp-counter.
      *      
      *      perform varying tmp-linenumber-2
      *          from tmp-linenumber by -1 
      *          until tmp-counter = 0
      *      
      *          move spaces to tmp-source-line-buffer
      *          move tmp-linenumber-2 to tmp-linenumber-bin
      *          
      *          call GETLINE using tmp-linenumber-bin
      *          tmp-source-line-buffer end-call
      *          
      *          move tmp-source-line-buffer to sourceline(tmp-counter)
      *          move tmp-linenumber-2 to linenumber(tmp-counter)
      *          
      *          subtract 1 from tmp-counter end-subtract
      *      end-perform
            
      *      display animator-screen end-display        
            continue.
            
      ***************************************************************      
        line-up section.
            if line-cursor-position > 2 
                display ' ' line line-cursor-position col 6 
                end-display
                
                subtract 1 from line-cursor-position end-subtract
                display line-cursor end-display
            else
                if line-cursor-position = 2
                and linenumber(1) > 1
                    perform scroll-one-line-up
                end-if            
            end-if 
            
            perform display-current-breakpoints.
            perform display-active-line-if-visible.
            
            continue.
            
      ***************************************************************
        line-down section.
            compute tmp-line-position = MAX-ROWS + 1 end-compute
            if line-cursor-position < tmp-line-position
                display ' ' line line-cursor-position col 6 
                end-display
                
                add 1 to line-cursor-position end-add
                display line-cursor end-display
            else    
                if line-cursor-position = tmp-line-position
                and linenumber(MAX-ROWS) < module-line-count
                and MAX-ROWS < module-line-count
                    perform scroll-one-line-down
                end-if
            end-if
            
            perform display-current-breakpoints.
            perform display-active-line-if-visible.
                        
            continue.

      ***************************************************************
        scroll-one-line-down section.
            
        
            perform varying tmp-linenumber 
                from 2 by 1 until tmp-linenumber > MAX-ROWS
                
                compute tmp-linenumber-2 = tmp-linenumber - 1 
                end-compute
                
                move linenumber(tmp-linenumber) 
                    to linenumber(tmp-linenumber-2)
                move sourceline(tmp-linenumber) 
                    to sourceline(tmp-linenumber-2)    
            end-perform
            
            compute tmp-linenumber = linenumber(MAX-ROWS) + 1 
            end-compute
            
            move spaces to tmp-source-line-buffer
            move tmp-linenumber to tmp-linenumber-bin
            
            call GETLINE using tmp-linenumber-bin 
            tmp-source-line-buffer end-call
            
            move spaces to sourceline(MAX-ROWS).
            move function trim (tmp-source-line-buffer, trailing) to
                sourceline(MAX-ROWS).
            move tmp-linenumber to linenumber(MAX-ROWS).
            
            display animator-screen end-display
            
            continue.
            
      ***************************************************************
        scroll-one-line-up section.
            perform varying tmp-linenumber 
                from MAX-ROWS by -1 until tmp-linenumber = 1
                
                compute tmp-linenumber-2 = tmp-linenumber - 1 
                end-compute
                
      *          display tmp-linenumber upon syserr end-display
      *          display tmp-linenumber-2 upon syserr end-display
                
                move linenumber(tmp-linenumber-2) 
                    to linenumber(tmp-linenumber)
                move sourceline(tmp-linenumber-2) 
                    to sourceline(tmp-linenumber)    
            end-perform
            
            compute tmp-linenumber = linenumber(1) - 1 
            end-compute
            
            move spaces to tmp-source-line-buffer
            move tmp-linenumber to tmp-linenumber-bin
            
            call GETLINE using tmp-linenumber-bin 
            tmp-source-line-buffer end-call
            
            move spaces to sourceline(1).
            move function trim (tmp-source-line-buffer, trailing) to 
                sourceline(1).
            move tmp-linenumber to linenumber(1).
            
            display animator-screen end-display            
        
            continue.

      ***************************************************************
      *** ----------------- read in breakpoints from list file
        read-in-breakpoints section.
            move spaces to bp-path.
            accept bp-path from environment "COB_BREAKPOINT_FILE" 
            end-accept
            
            if bp-path = spaces 
                move "xanim_breakpoint.lst" to bp-path
            end-if
            
            move 0 to bp-amount.

            open input bp-file.
            if bp-file-status not = 0
                close bp-file
                open output bp-file
                close bp-file
            else
                read bp-file into bp-line end-read
                perform varying bp-line-counter 
                     from 1 by 1 until bp-line-counter = 1000 
                     or bp-file-status not = 0
                    
                    move 1 to tmp-line-position
                    unstring bp-line delimited by ';'
                        into tmp-bp-src-name
      *                  into bp-src-name(bp-line-counter)
                        with pointer tmp-line-position
                    end-unstring
                    unstring bp-line delimited by ';'
                        into tmp-bp-src-line
      *                  into bp-src-line(bp-line-counter)
                        with pointer tmp-line-position
                    end-unstring
                    
                    if tmp-bp-src-name not = spaces 
                        add 1 to bp-amount end-add
                        move tmp-bp-src-name 
                            to bp-src-name(bp-amount)
                        move tmp-bp-src-line 
                            to bp-src-line(bp-amount)
                    end-if
                    
                    read bp-file into bp-line end-read
                end-perform

                if bp-amount = 0
      *          or bp-src-name(1) = spaces
                    if cob-anim-logging = 'Y'
                        move "Empty bp list" to tmp-log-line
                        perform log-msg
                    end-if 
                    move 0 to bp-next-line
                    move 0 to bp-amount
                else
                    compute bp-next-line = bp-amount + 1 
                    end-compute
      *              move bp-line-counter to bp-amount
                    sort bp-line-struct ascending bp-src-name 
                        bp-src-line
                end-if

                close bp-file                
                
      *          display bp-src-name(1) "  " bp-src-line(1) 
      *          upon syserr end-display
      *          display bp-src-name(2) "  " bp-src-line(2) 
      *          upon syserr end-display
      *          display bp-src-name(3) "  " bp-src-line(3) 
      *          upon syserr end-display
      *          display bp-src-name(4) "  " bp-src-line(4) 
      *          upon syserr end-display
            end-if
            
      *      perform log-breakpoint-list.
           
            continue.

      ***************************************************************           
        set-unset-breakpoint section.
            move line-cursor-position to bp-check-src-line.
            subtract 1 from line-cursor-position 
            giving tmp-linenumber end-subtract
            move linenumber(tmp-linenumber) to bp-add-src-line.

            perform is-breakpoint.
            
            if is-breakpoint-flag = 0
                perform add-breakpoint
            else
                perform delete-breakpoint
            end-if
        
            display animator-screen end-display
            perform display-current-breakpoints.
            perform display-active-line-if-visible.
            
      *      perform log-breakpoint-list.
        
            continue.
      
      ***************************************************************
      *** ----------------- add a breakpoint
        add-breakpoint section.
      *      perform is-breakpoint.

            if bp-next-line = 0
                move 1 to bp-next-line
            end-if
            if bp-next-line < 1001
                add 1 to bp-amount end-add

                move cobol-src-name to bp-src-name(bp-next-line)
                move bp-add-src-line to bp-src-line(bp-next-line)
                add 1 to bp-next-line

                sort bp-line-struct ascending bp-src-name bp-src-line
            end-if
            
      *      perform log-breakpoint-list.
           
            continue.

      ***************************************************************
      *** ----------------- delete a breakpoint
        delete-breakpoint section.
           if bp-delete-src-name = spaces
                move cobol-src-name to bp-delete-src-name
           end-if

           search all bp-line-struct
                when bp-src-name(bp-index) = bp-delete-src-name and 
                     bp-src-line(bp-index) = bp-delete-src-line
                    
                    move spaces to bp-wp-temp-record
                    string "L!;" delimited by size 
                        function trim (bp-delete-src-name, trailing)
                        delimited by size
                        into bp-wp-temp-record
                    end-string
                
                    move bp-wp-temp-record to bp-src-name(bp-index)
           end-search 
           
      *     perform log-breakpoint-list.
                      
           continue.
       
      ***************************************************************
      *** ----------------- write breakpoints to list file
        flush-breakpoints section.
            open output bp-file.
            
      *      string "bp-next-line: " delimited by size 
      *          bp-next-line delimited by size
      *          into tmp-log-line
      *      end-string
      *      perform log-msg.
            
            if bp-next-line > 0 
                perform varying bp-line-counter from 1 by 1 
                until bp-line-counter = bp-next-line
                    move spaces to bp-line
                    if bp-src-name(bp-line-counter)(1:2) = 'L!'
                        exit perform cycle
                    end-if
                    string function trim (bp-src-name(bp-line-counter))
                        delimited by size 
                        ';' delimited by size 
                        bp-src-line(bp-line-counter) delimited by size
                        into bp-line
                    end-string
                    
                    write bp-line end-write
                end-perform
            end-if
            
            close bp-file.
           
            continue.
           
      ***************************************************************
      *** ----------------- check if breakpoint exists
        is-breakpoint section.
            move 0 to is-breakpoint-flag.
            move 1 to bp-index.
            
            search all bp-line-struct
                when bp-src-name(bp-index) = bp-check-src-name and 
                     bp-src-line(bp-index) = bp-check-src-line
                 
                move 1 to is-breakpoint-flag
            end-search
      *      move spaces to bp-check-src-name.

            continue.             
            
      ***************************************************************
        display-current-breakpoints section.
            move cobol-src-name to bp-check-src-name.
      *      move "testprog" to bp-check-src-name.
            
            perform varying tmp-onscreen-linenumber from 1 by 1 
                until tmp-onscreen-linenumber = MAX-ROWS
                or bp-amount = 0

                move linenumber(tmp-onscreen-linenumber) 
                    to bp-check-src-line
                perform is-breakpoint
                
                if is-breakpoint-flag = 1 
                    add 1 to tmp-onscreen-linenumber giving
                    tmp-onscreen-linenumber-2 end-add 
                    
                    display sourceline(tmp-onscreen-linenumber)(1:74)
                    line tmp-onscreen-linenumber-2 col 7 
                    with background-color COB-COLOR-RED end-display
      *              move "testtest" to sourceline(1)
      *              display testline
      *              with background-color COB-COLOR-RED end-display
                end-if
            end-perform
            
            continue.

      ***************************************************************
        log-interface-block section.
            
            if cob-anim-logging = 'Y'
            
                move "**************************" to tmp-log-line
                perform log-msg
                
                string "anim-state: " delimited by size
                    anim-state delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                string "cobol-src-name: " delimited by size
                    cobol-src-name delimited by size
                    into tmp-log-line
                end-string
                perform log-msg
                
                string "first-stmt-if: " delimited by size
                    first-stmt-if delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                string "current-line-if: " delimited by size
                    current-line-if delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                string "active-line-if: " delimited by size
                    active-line-if delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                string "no-code-lines-if: " delimited by size
                    no-code-lines-if delimited by size
                    into tmp-log-line
                end-string
                perform log-msg
                
                string "dtf-line: " delimited by size
                    dtf-line delimited by size
                    into tmp-log-line
                end-string
                perform log-msg
                
                string "dtf-usage: " delimited by size
                    dtf-usage delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                string "dtf-length: " delimited by size
                    dtf-length delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                string "dtf-value: " delimited by size
                    dtf-value delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                string "anim-stmt-type: " delimited by size
                    anim-stmt-type delimited by size
                    into tmp-log-line
                end-string
                perform log-msg

                move "**************************" to tmp-log-line
                perform log-msg
            
            end-if
            
            continue.
            
      ***************************************************************
        log-breakpoint-list section.
            if cob-anim-logging = 'Y'
            
            move spaces to log-line
            move "**************************" to log-line
            write log-line
            
            if bp-next-line not = 0 
                perform varying tmp-linenumber from 1 by 1 
                    until tmp-linenumber = bp-next-line
                    
                    move spaces to log-line
                    string bp-src-name(tmp-linenumber) delimited by size
                        ";" delimited by size 
                        bp-src-line(tmp-linenumber) delimited by size 
                        into log-line
                    end-string
                    write log-line
                end-perform
            end-if
            
            move spaces to log-line
            move "*************************" to log-line
            write log-line
            
            end-if
            continue.
            
      ***************************************************************
        view-variable section.
            move 3 to tmp-unstring-ptr.
            move spaces to tmp-unstring-buffer.
            unstring tmp-command-input-buffer delimited by space 
                into tmp-unstring-buffer
                with pointer tmp-unstring-ptr
            end-unstring
            
            move "After unstring..." to tmp-log-line.
            perform log-msg.
            move low-value to tmp-unstring-buffer(30:1).
            move "After low-value..." to tmp-log-line.
            perform log-msg.
            move tmp-unstring-buffer to tmp-log-line.
            perform log-msg.
            move "After disp..." to tmp-log-line.
            perform log-msg.
            perform log-interface-block.
            move "Before call animdata..." to tmp-log-line.
            perform log-msg.
            string "Calling " delimited by size 
                ANIDATA delimited by spaces
                into tmp-log-line
            end-string 
            perform log-msg.
                        
            call ANIDATA using "G" interface-block 
            tmp-unstring-buffer end-call
            
            display empty-screen end-display
            
            move tmp-unstring-buffer to name-vv-content.
            move dtf-length to size-vv-content.
            move dtf-usage to usage-vv-content.
            move dtf-value(1:60) to content-vv-l1.
            move dtf-value(61:60) to content-vv-l2.
            move dtf-value(121:60) to content-vv-l3.
            move dtf-value(181:60) to content-vv-l4.
            move dtf-value(241:40) to content-vv-l5.
            display view-variable-screen end-display
            
            move 0 to dtf-length, dtf-usage.
            move spaces to dtf-value.
            
            move "Back" to func1.
            move spaces to func2, func3, func4, func5, func6, 
            func7, func8.
            display footline-2 end-display
            display footline end-display
            
            move "After calling animdata..." to tmp-log-line.
            perform log-msg.
            perform log-interface-block.
            
            accept tmp-command-input-buffer line 23 col 10 end-accept

            perform process-function-key-vv
      *          perform process-input-buffer
            continue.
            
      **************************************************************
        goback-from-vv section.
            
            display empty-screen end-display
            perform do-screen-init.
            display animator-screen end-display
            perform display-current-breakpoints.
            perform display-active-line.
            
            continue.
            
      ***************************************************************
        string-contains section.
            move 0 to string-contains-flag.
            move function length(function trim (string-contains-str2, 
                trailing)) to tmp-number-2.
            compute tmp-number = function length(function 
                trim(string-contains-str1, trailing)) 
                - tmp-number-2 end-compute
            
            if tmp-number = 0 and string-contains-str1 = 
                string-contains-str2
                
                move 1 to string-contains-flag
            else if tmp-number > 0
                perform varying tmp-counter from 1 by 1 
                    until tmp-counter = tmp-number
                    
                    if string-contains-str1(tmp-counter:tmp-number-2) = 
                        string-contains-str2
                        
                        move 1 to string-contains-flag
                        exit perform
                    end-if
                    
                end-perform
            end-if
        
            continue.
            
      ***************************************************************
        log-msg section.
            if cob-anim-logging = 'Y' 
                move spaces to log-line
                move tmp-log-line to log-line
                move spaces to tmp-log-line
            
                write log-line
            end-if
        
            continue.
