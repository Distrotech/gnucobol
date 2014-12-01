        identification division.
        program-id. printani.
        
        environment division.
        configuration section.
        input-output section.
        file-control.
           select ani assign to filename
               organization is indexed
               access mode is dynamic
               record key is ani-key
               file status is ani-status.        
               
               
        data division.
        file section.
            fd  ani.
            01  ani-rec.
                03  ani-key.
                    05  ani-seqno                 pic 9(7).
                03  ani-type                      pic x.
                    88 ani-data                   value "D".
                    88 ani-proc                   value "P".
                03  ani-condition                 pic x.
                03  ani-area-ab                   pic x(65).
            01  ani-rec2.
                03  ani-bw                        pic 9.
                03  ani-seqno6                    pic 9(6).
                03  filler                        pic x(67).
        
        working-storage section.
            01 recordbuffer pic x(255).
            
            01 ani-status pic 99.
            01 recpos pic 9(8).
            
        linkage section.
            01 filename pic x(256).
            01 linecount usage binary-long.
            01 ani-record-buffer.
                05 ani-record pic x(256) occurs 1 to 99999 times 
                    depending on linecount.
                
        procedure division using by reference 
            filename ani-record-buffer linecount.
            
            open input ani.
      *      display "Open anifile" filename ani-status upon syserr 
      *      end-display
      
      *      move spaces to ani-record-buffer.
            move 1 to recpos.
      * Read first record and do nothing, just move cursor to second record      
            read ani next record into recordbuffer end-read
            
            perform forever
                if recpos > linecount
      *              display "Last buffer position: " recpos upon syserr 
      *              end-display
      *              display "linecount: " linecount upon syserr 
      *              end-display
                    exit perform
                end-if
            
                move spaces to recordbuffer
                read ani next record into recordbuffer 
                at end exit perform end-read
                
      *          display recordbuffer upon syserr end-display
                
                string recordbuffer delimited by size 
                    into ani-record(recpos) 
                end-string
                
                add 1 to recpos end-add
                
      *          display "Buffer-Position: " recpos upon syserr 
      *          end-display
            end-perform
      
            close ani.
            
        goback.
