000100 IDENTIFICATION DIVISION.
000200 PROGRAM-ID. RWEX06.
000300 AUTHOR. JAY MOSELEY.
000400 DATE-WRITTEN. APRIL, 2008.
000410* ************************************************************* *
000412* * MODIFICATIONS:                                              *
000414* * CORRECT PARAGRAPH NAME AND GO TO CODING ERRORS.             * 
000416* ************************************************************* *
000500 DATE-COMPILED.
000600
000700* ************************************************************* *
000800* REPORT WRITER EXAMPLE #6.                                     *
000900* ************************************************************* *
001000
001100 ENVIRONMENT DIVISION.
001200 CONFIGURATION SECTION.
001300 SOURCE-COMPUTER. IBM-370.
001400 OBJECT-COMPUTER. IBM-370.
001500
001600 INPUT-OUTPUT SECTION.
001700 FILE-CONTROL.
001800
001900     SELECT PAYROLL-REGISTER-DATA
002000         ASSIGN TO EXTERNAL DATAIN
002005                   ORGANIZATION IS LINE SEQUENTIAL.
002100
002200     SELECT REPORT-FILE
002300         ASSIGN TO EXTERNAL LINE ADVANCING SYSPRINT.
002400
002500 DATA DIVISION.
002600 FILE SECTION.
002700
002800 FD  PAYROLL-REGISTER-DATA
002900     LABEL RECORDS ARE OMITTED
003000     BLOCK CONTAINS 0 RECORDS
003100     RECORD CONTAINS 80 CHARACTERS
003200     DATA RECORD IS PAYROLL-REGISTER-RECORD.
003300
003400 01  PAYROLL-REGISTER-RECORD.
003500     03  PRR-DEPARTMENT-NUMBER   PIC 9(02).
003600     03  FILLER                  PIC X(01).
003700     03  PRR-EMPLOYEE-KEY.
003800         05  PRR-EMPLOYEE-NO     PIC 9(04).
003900         05  FILLER              PIC X(01).
004000         05  PRR-GENDER          PIC X(01).
004100         05  FILLER              PIC X(01).
004200         05  PRR-EMPLOYEE-NAME   PIC X(20).
004300     03  FILLER                  PIC X(01).
004400     03  PRR-PAY-DATE            PIC 9(08).
004500     03  FILLER                  REDEFINES PRR-PAY-DATE.
004600         05  PRR-PAY-DATE-YEAR   PIC 9(04).
004700         05  PRR-PAY-DATE-MONTH  PIC 9(02).
004800         05  PRR-PAY-DATE-DAY    PIC 9(02).
004900     03  FILLER                  PIC X(01).
005000     03  PRR-GROSS-PAY           PIC 9(04)V99.
005100     03  FILLER                  PIC X(01).
005200     03  PRR-FICA-WH             PIC 9(03)V99.
005300     03  FILLER                  PIC X(01).
005400     03  PRR-FED-WH              PIC 9(03)V99.
005500     03  FILLER                  PIC X(01).
005600     03  PRR-MISC-DED            PIC 9(03)V99.
005700     03  FILLER                  PIC X(01).
005800     03  PRR-NET-PAY             PIC 9(04)V99.
005900     03  FILLER                  PIC X(09).
006000
006100 FD  REPORT-FILE
006200     LABEL RECORDS ARE OMITTED
006300     REPORT IS QUARTERLY-PAY-REGISTER.
006400
006500 WORKING-STORAGE SECTION.
006600 77  END-OF-FILE-SWITCH          PIC X(1)    VALUE 'N'.
006700     88  END-OF-FILE                         VALUE 'Y'.
006800
006900 01  WS-EMPLOYEE-KEY.
007000     03  WS-EMPLOYEE-NUMBER      PIC 9(04).
007100     03  FILLER                  PIC X(03).
007200     03  WS-EMPLOYEE-NAME        PIC X(20).
007300
007400 01  WS-PERCENTS-COMPUTED.
007500     03  WPC-DEPT                OCCURS 6 TIMES
007600                                 INDEXED BY WPCD-IX.
007700         05  WPC-PERCENT         OCCURS 5 TIMES
007800                                 INDEXED BY WPCC-IX
007900                                 PIC 9(3)V99.
008000
008100 01  DEPARTMENT-TABLE.
008200     03  FILLER PIC X(17) VALUE '01MANAGEMENT     '.
008300     03  FILLER PIC X(50) VALUE ZEROS.
008400     03  FILLER PIC X(17) VALUE '05ADMINISTRATIVE '.
008500     03  FILLER PIC X(50) VALUE ZEROS.
008600     03  FILLER PIC X(17) VALUE '10SKILLED NURSING'.
008700     03  FILLER PIC X(50) VALUE ZEROS.
008800     03  FILLER PIC X(17) VALUE '15PATIENT SUPPORT'.
008900     03  FILLER PIC X(50) VALUE ZEROS.
009000     03  FILLER PIC X(17) VALUE '20HOUSEKEEPING   '.
009100     03  FILLER PIC X(50) VALUE ZEROS.
009200     03  FILLER PIC X(17) VALUE '25MAINTENANCE    '.
009300     03  FILLER PIC X(50) VALUE ZEROS.
009400 01  FILLER REDEFINES DEPARTMENT-TABLE.
009500     03  DEPARTMENT-ENTRY      OCCURS 6 TIMES
009600                               INDEXED BY DE-IX.
009700         05  DE-NUMBER         PIC 9(02).
009800         05  DE-NAME           PIC X(15).
009900         05  DE-GROSS          PIC 9(08)V99.
010000         05  DE-FICA           PIC 9(08)V99.
010100         05  DE-FWT            PIC 9(08)V99.
010200         05  DE-MISC           PIC 9(08)V99.
010300         05  DE-NET            PIC 9(08)V99.
010400
010500 REPORT SECTION.
010600 RD  QUARTERLY-PAY-REGISTER
010700     CONTROLS ARE FINAL, PRR-DEPARTMENT-NUMBER,
010800         PRR-EMPLOYEE-KEY
010900     PAGE LIMIT IS 66 LINES
011000     HEADING 1
011100     FIRST DETAIL 7
011200     LAST DETAIL 60.
011300
011400 01  TYPE PAGE HEADING.
011500     02  LINE 1.
011600         03  COLUMN 39   PIC X(13) VALUE 'C E N T U R Y'.
011700         03  COLUMN 55   PIC X(13) VALUE 'M E D I C A L'.
011800         03  COLUMN 71   PIC X(11) VALUE 'C E N T E R'.
011900     02  LINE 2.
012000         03  COLUMN 35   PIC X(17) VALUE 'Q U A R T E R L Y'.
012100         03  COLUMN 55   PIC X(13) VALUE 'P A Y R O L L'.
012200         03  COLUMN 71   PIC X(15) VALUE 'R E G I S T E R'.
012300         03  COLUMN 111  PIC X(04) VALUE 'PAGE'.
012400         03  COLUMN 116  PIC ZZZZ9 SOURCE PAGE-COUNTER.
012500     02  LINE 4.
012600         03  COLUMN 06   PIC X(28) VALUE
012700             '--------- EMPLOYEE ---------'.
012800         03  COLUMN 40   PIC X(05) VALUE 'GROSS'.
012900         03  COLUMN 54   PIC X(04) VALUE 'FICA'.
013000         03  COLUMN 66   PIC X(07) VALUE 'FED W/H'.
013100         03  COLUMN 80   PIC X(05) VALUE 'MISC.'.
013200         03  COLUMN 95   PIC X(03) VALUE 'NET'.
013300     02  LINE 5.
013400         03  COLUMN 07   PIC X(02) VALUE 'NO'.
013500         03  COLUMN 22   PIC X(04) VALUE 'NAME'.
013600         03  COLUMN 41   PIC X(03) VALUE 'PAY'.
013700         03  COLUMN 55   PIC X(03) VALUE 'TAX'.
013800         03  COLUMN 68   PIC X(03) VALUE 'TAX'.
013900         03  COLUMN 79   PIC X(07) VALUE 'DEDUCT.'.
014000         03  COLUMN 95   PIC X(03) VALUE 'PAY'.
014100
014200 01  DEPT-HEAD TYPE CONTROL HEADING PRR-DEPARTMENT-NUMBER
014300     NEXT GROUP PLUS 1.
014400     02  LINE PLUS 1.
014500         03 COLUMN 01    PIC X(18) VALUE
014600            'DEPARTMENT NUMBER:'.
014700         03  COLUMN 21   PIC 9(02) SOURCE PRR-DEPARTMENT-NUMBER.
014800         03  COLUMN 24   PIC X(15) SOURCE DE-NAME (DE-IX).
014900
015000 01  EMPLOYEE-DETAIL TYPE DETAIL.
015100     02  LINE PLUS 1.
015200         03  COLUMN 01   PIC X(27) SOURCE PRR-EMPLOYEE-KEY.
015300         03  COLUMN 50   PIC 9(04).99 SOURCE PRR-GROSS-PAY.
015400         03  COLUMN 60   PIC 9(03).99 SOURCE PRR-FICA-WH.
015500         03  COLUMN 70   PIC 9(03).99 SOURCE PRR-FED-WH.
015600         03  COLUMN 80   PIC 9(03).99 SOURCE PRR-MISC-DED.
015700         03  COLUMN 90   PIC 9(04).99 SOURCE PRR-NET-PAY.
015800
015900 01  EMPL-FOOT TYPE CONTROL FOOTING PRR-EMPLOYEE-KEY.
016000     02  LINE PLUS 1.
016100         03  COLUMN 06   PIC ZZZ9  SOURCE WS-EMPLOYEE-NUMBER.
016200         03  COLUMN 14   PIC X(20) SOURCE WS-EMPLOYEE-NAME.
016300         03  COLUMN 38   PIC $$,$$9.99 SUM PRR-GROSS-PAY.
016400         03  COLUMN 53   PIC $$$9.99 SUM PRR-FICA-WH.
016500         03  COLUMN 66   PIC $$$9.99 SUM PRR-FED-WH.
016600         03  COLUMN 79   PIC $$$9.99 SUM PRR-MISC-DED.
016700         03  COLUMN 92   PIC $$,$$9.99 SUM PRR-NET-PAY.
016800
016900 01  DEPT-FOOT TYPE CONTROL FOOTING PRR-DEPARTMENT-NUMBER
017000     NEXT GROUP PLUS 2.
017100     02  LINE PLUS 2.
017200         03  COLUMN 14   PIC X(20) VALUE
017300             'DEPARTMENT TOTALS'.
017400         03  DEPT-FOOT-GROSS       COLUMN 38   PIC $$,$$9.99
017500                                   SUM PRR-GROSS-PAY.
017600         03  COLUMN 48   PIC X         VALUE '*'.
017700         03  DEPT-FOOT-FICA        COLUMN 53   PIC $$$9.99
017800                                   SUM PRR-FICA-WH.
017900         03  COLUMN 61   PIC X         VALUE '*'.
018000         03  DEPT-FOOT-FWT         COLUMN 66   PIC $$$9.99
018100                                   SUM PRR-FED-WH.
018200         03  COLUMN 74   PIC X         VALUE '*'.
018300         03  DEPT-FOOT-MISC        COLUMN 79   PIC $$$9.99
018400                                   SUM PRR-MISC-DED.
018500         03  COLUMN 87   PIC X         VALUE '*'.
018600         03  DEPT-FOOT-NET         COLUMN 92   PIC $$,$$9.99
018700                                   SUM PRR-NET-PAY.
018800         03  COLUMN 102  PIC X         VALUE '*'.
018900
019000 01  COMP-FOOT TYPE CONTROL FOOTING FINAL.
019100     02  LINE PLUS 2.
019200         03  COLUMN 14   PIC X(20) VALUE
019300             'COMPANY TOTALS'.
019400         03  CO-GROSS    COLUMN 37   PIC $$$,$$9.99
019500                         SUM PRR-GROSS-PAY.
019600         03  COLUMN 48   PIC XX        VALUE '**'.
019700         03  CO-FICA     COLUMN 51   PIC $$,$$9.99
019800                         SUM PRR-FICA-WH.
019900         03  COLUMN 61   PIC XX        VALUE '**'.
020000         03  CO-FWT      COLUMN 64   PIC $$,$$9.99
020100                         SUM PRR-FED-WH.
020200         03  COLUMN 74   PIC XX        VALUE '**'.
020300         03  CO-MISC     COLUMN 77   PIC $$,$$9.99
020400                         SUM PRR-MISC-DED.
020500         03  COLUMN 87   PIC XX        VALUE '**'.
020600         03  CO-NET      COLUMN 91   PIC $$$,$$9.99
020700                         SUM PRR-NET-PAY.
020800         03  COLUMN 102  PIC XX        VALUE '**'.
020900
021000 01  REPORT-FOOT TYPE REPORT FOOTING.
021100     02  LINE 1.
021200         03  COLUMN 39   PIC X(13) VALUE 'C e n t u r y'.
021300         03  COLUMN 55   PIC X(13) VALUE 'M e d i c a l'.
021400         03  COLUMN 71   PIC X(11) VALUE 'C e n t e r'.
021500     02  LINE 2.
021600         03  COLUMN 35   PIC X(17) VALUE 'Q u a r t e r l y'.
021700         03  COLUMN 55   PIC X(13) VALUE 'P a y r o l l'.
021800         03  COLUMN 71   PIC X(15) VALUE 'R e g i s t e r'.
021900         03  COLUMN 111  PIC X(04) VALUE 'PAGE'.
022000         03  COLUMN 116  PIC ZZZZ9 SOURCE PAGE-COUNTER.
022100     02  LINE 4.
022200         03  COLUMN 40   PIC X(05) VALUE 'GROSS'.
022300         03  COLUMN 58   PIC X(04) VALUE 'FICA'.
022400         03  COLUMN 74   PIC X(07) VALUE 'FED W/H'.
022500         03  COLUMN 92   PIC X(05) VALUE 'MISC.'.
022600         03  COLUMN 111  PIC X(03) VALUE 'NET'.
022700     02  LINE 5.
022800         03  COLUMN 41   PIC X(03) VALUE 'PAY'.
022900         03  COLUMN 59   PIC X(03) VALUE 'TAX'.
023000         03  COLUMN 76   PIC X(03) VALUE 'TAX'.
023100         03  COLUMN 91   PIC X(07) VALUE 'DEDUCT.'.
023200         03  COLUMN 111  PIC X(03) VALUE 'PAY'.
023300
023400     02  LINE PLUS 2.
023500         03  COLUMN 05   PIC X(29) VALUE
023600             '* * * DEPARTMENT TOTALS * * *'.
023700     02  LINE PLUS 2.
023800         03  COLUMN 05   PIC 9(02) SOURCE DE-NUMBER (1).
023900         03  COLUMN 08   PIC X(15) SOURCE DE-NAME (1).
024000         03  COLUMN 38   PIC $$,$$9.99 SOURCE DE-GROSS (1).
024100         03  COLUMN 48   PIC ZZ9 SOURCE WPC-PERCENT (1 1).
024200         03  COLUMN 51   PIC X VALUE '%'.
024300         03  COLUMN 57   PIC $$$9.99   SOURCE DE-FICA (1).
024400         03  COLUMN 65   PIC ZZ9 SOURCE WPC-PERCENT (1 2).
024500         03  COLUMN 68   PIC X VALUE '%'.
024600         03  COLUMN 74   PIC $$$9.99   SOURCE DE-FWT (1).
024700         03  COLUMN 82   PIC ZZ9 SOURCE WPC-PERCENT (1 3).
024800         03  COLUMN 85   PIC X VALUE '%'.
024900         03  COLUMN 91   PIC $$$9.99   SOURCE DE-MISC (1).
025000         03  COLUMN 99   PIC ZZ9 SOURCE WPC-PERCENT (1 4).
025100         03  COLUMN 102  PIC X VALUE '%'.
025200         03  COLUMN 108  PIC $$,$$9.99 SOURCE DE-NET (1).
025300         03  COLUMN 118  PIC ZZ9 SOURCE WPC-PERCENT (1 5).
025400         03  COLUMN 121  PIC X VALUE '%'.
025500     02  LINE PLUS 2.
025600         03  COLUMN 05   PIC 9(02) SOURCE DE-NUMBER (2).
025700         03  COLUMN 08   PIC X(15) SOURCE DE-NAME (2).
025800         03  COLUMN 38   PIC $$,$$9.99 SOURCE DE-GROSS (2).
025900         03  COLUMN 48   PIC ZZ9 SOURCE WPC-PERCENT (2 1).
026000         03  COLUMN 51   PIC X VALUE '%'.
026100         03  COLUMN 57   PIC $$$9.99   SOURCE DE-FICA (2).
026200         03  COLUMN 65   PIC ZZ9 SOURCE WPC-PERCENT (2 2).
026300         03  COLUMN 68   PIC X VALUE '%'.
026400         03  COLUMN 74   PIC $$$9.99   SOURCE DE-FWT (2).
026500         03  COLUMN 82   PIC ZZ9 SOURCE WPC-PERCENT (2 3).
026600         03  COLUMN 85   PIC X VALUE '%'.
026700         03  COLUMN 91   PIC $$$9.99   SOURCE DE-MISC (2).
026800         03  COLUMN 99   PIC ZZ9 SOURCE WPC-PERCENT (2 4).
026900         03  COLUMN 102  PIC X VALUE '%'.
027000         03  COLUMN 108  PIC $$,$$9.99 SOURCE DE-NET (2).
027100         03  COLUMN 118  PIC ZZ9 SOURCE WPC-PERCENT (2 5).
027200         03  COLUMN 121  PIC X VALUE '%'.
027300     02  LINE PLUS 2.
027400         03  COLUMN 05   PIC 9(02) SOURCE DE-NUMBER (3).
027500         03  COLUMN 08   PIC X(15) SOURCE DE-NAME (3).
027600         03  COLUMN 38   PIC $$,$$9.99 SOURCE DE-GROSS (3).
027700         03  COLUMN 48   PIC ZZ9 SOURCE WPC-PERCENT (3 1).
027800         03  COLUMN 51   PIC X VALUE '%'.
027900         03  COLUMN 57   PIC $$$9.99   SOURCE DE-FICA (3).
028000         03  COLUMN 65   PIC ZZ9 SOURCE WPC-PERCENT (3 2).
028100         03  COLUMN 68   PIC X VALUE '%'.
028200         03  COLUMN 74   PIC $$$9.99   SOURCE DE-FWT (3).
028300         03  COLUMN 82   PIC ZZ9 SOURCE WPC-PERCENT (3 3).
028400         03  COLUMN 85   PIC X VALUE '%'.
028500         03  COLUMN 91   PIC $$$9.99   SOURCE DE-MISC (3).
028600         03  COLUMN 99   PIC ZZ9 SOURCE WPC-PERCENT (3 4).
028700         03  COLUMN 102  PIC X VALUE '%'.
028800         03  COLUMN 108  PIC $$,$$9.99 SOURCE DE-NET (3).
028900         03  COLUMN 118  PIC ZZ9 SOURCE WPC-PERCENT (3 5).
029000         03  COLUMN 121  PIC X VALUE '%'.
029100     02  LINE PLUS 2.
029200         03  COLUMN 05   PIC 9(02) SOURCE DE-NUMBER (4).
029300         03  COLUMN 08   PIC X(15) SOURCE DE-NAME (4).
029400         03  COLUMN 38   PIC $$,$$9.99 SOURCE DE-GROSS (4).
029500         03  COLUMN 48   PIC ZZ9 SOURCE WPC-PERCENT (4 1).
029600         03  COLUMN 51   PIC X VALUE '%'.
029700         03  COLUMN 57   PIC $$$9.99   SOURCE DE-FICA (4).
029800         03  COLUMN 65   PIC ZZ9 SOURCE WPC-PERCENT (4 2).
029900         03  COLUMN 68   PIC X VALUE '%'.
030000         03  COLUMN 74   PIC $$$9.99   SOURCE DE-FWT (4).
030100         03  COLUMN 82   PIC ZZ9 SOURCE WPC-PERCENT (4 3).
030200         03  COLUMN 85   PIC X VALUE '%'.
030300         03  COLUMN 91   PIC $$$9.99   SOURCE DE-MISC (4).
030400         03  COLUMN 99   PIC ZZ9 SOURCE WPC-PERCENT (4 4).
030500         03  COLUMN 102  PIC X VALUE '%'.
030600         03  COLUMN 108  PIC $$,$$9.99 SOURCE DE-NET (4).
030700         03  COLUMN 118  PIC ZZ9 SOURCE WPC-PERCENT (4 5).
030800         03  COLUMN 121  PIC X VALUE '%'.
030900     02  LINE PLUS 2.
031000         03  COLUMN 05   PIC 9(02) SOURCE DE-NUMBER (5).
031100         03  COLUMN 08   PIC X(15) SOURCE DE-NAME (5).
031200         03  COLUMN 38   PIC $$,$$9.99 SOURCE DE-GROSS (5).
031300         03  COLUMN 48   PIC ZZ9 SOURCE WPC-PERCENT (5 1).
031400         03  COLUMN 51   PIC X VALUE '%'.
031500         03  COLUMN 57   PIC $$$9.99   SOURCE DE-FICA (5).
031600         03  COLUMN 65   PIC ZZ9 SOURCE WPC-PERCENT (5 2).
031700         03  COLUMN 68   PIC X VALUE '%'.
031800         03  COLUMN 74   PIC $$$9.99   SOURCE DE-FWT (5).
031900         03  COLUMN 82   PIC ZZ9 SOURCE WPC-PERCENT (5 3).
032000         03  COLUMN 85   PIC X VALUE '%'.
032100         03  COLUMN 91   PIC $$$9.99   SOURCE DE-MISC (5).
032200         03  COLUMN 99   PIC ZZ9 SOURCE WPC-PERCENT (5 4).
032300         03  COLUMN 102  PIC X VALUE '%'.
032400         03  COLUMN 108  PIC $$,$$9.99 SOURCE DE-NET (5).
032500         03  COLUMN 118  PIC ZZ9 SOURCE WPC-PERCENT (5 5).
032600         03  COLUMN 121  PIC X VALUE '%'.
032700     02  LINE PLUS 2.
032800         03  COLUMN 05   PIC 9(02) SOURCE DE-NUMBER (6).
032900         03  COLUMN 08   PIC X(15) SOURCE DE-NAME (6).
033000         03  COLUMN 38   PIC $$,$$9.99 SOURCE DE-GROSS (6).
033100         03  COLUMN 48   PIC ZZ9 SOURCE WPC-PERCENT (6 1).
033200         03  COLUMN 51   PIC X VALUE '%'.
033300         03  COLUMN 57   PIC $$$9.99   SOURCE DE-FICA (6).
033400         03  COLUMN 65   PIC ZZ9 SOURCE WPC-PERCENT (6 2).
033500         03  COLUMN 68   PIC X VALUE '%'.
033600         03  COLUMN 74   PIC $$$9.99   SOURCE DE-FWT (6).
033700         03  COLUMN 82   PIC ZZ9 SOURCE WPC-PERCENT (6 3).
033800         03  COLUMN 85   PIC X VALUE '%'.
033900         03  COLUMN 91   PIC $$$9.99   SOURCE DE-MISC (6).
034000         03  COLUMN 99   PIC ZZ9 SOURCE WPC-PERCENT (6 4).
034100         03  COLUMN 102  PIC X VALUE '%'.
034200         03  COLUMN 108  PIC $$,$$9.99 SOURCE DE-NET (6).
034300         03  COLUMN 118  PIC ZZ9 SOURCE WPC-PERCENT (6 5).
034400         03  COLUMN 121  PIC X VALUE '%'.
034500     02  LINE PLUS 2.
034600         03  COLUMN 37   PIC $$$,$$9.99 SOURCE CO-GROSS.
034700         03  COLUMN 48   PIC X(5) VALUE '100%'.
034800         03  COLUMN 55   PIC $$,$$9.99  SOURCE CO-FICA.
034900         03  COLUMN 65   PIC X(5) VALUE '100%'.
035000         03  COLUMN 72   PIC $$,$$9.99  SOURCE CO-FWT.
035100         03  COLUMN 82   PIC X(5) VALUE '100%'.
035200         03  COLUMN 89   PIC $$,$$9.99  SOURCE CO-MISC.
035300         03  COLUMN 99   PIC X(5) VALUE '100%'.
035400         03  COLUMN 107  PIC $$$,$$9.99 SOURCE CO-NET.
035500         03  COLUMN 118  PIC X(5) VALUE '100%'.
035600
035700 PROCEDURE DIVISION.
035800
035900 DECLARATIVES.
036000
036100 DEPT-HEAD-USE SECTION. USE BEFORE REPORTING DEPT-HEAD.
036200 DEPT-HEAD-PROC.
036300     SET DE-IX TO +1.
036400     SEARCH DEPARTMENT-ENTRY
036500         WHEN DE-NUMBER (DE-IX) = PRR-DEPARTMENT-NUMBER
036600             MOVE ZEROS TO DE-GROSS (DE-IX), DE-FICA (DE-IX),
036700                           DE-FWT (DE-IX), DE-MISC (DE-IX),
036800                           DE-NET (DE-IX).
036900
037000 DEPT-HEAD-EXIT.
037100     EXIT.
037200
037300 EMPL-FOOT-USE SECTION. USE BEFORE REPORTING EMPL-FOOT.
037400 EMPL-FOOT-PROC.
037500     MOVE PRR-EMPLOYEE-KEY TO WS-EMPLOYEE-KEY.
037600
037700 EMPL-FOOT-EXIT.                                                  
037800     EXIT.
037900
038000 DEPT-FOOT-USE SECTION. USE BEFORE REPORTING DEPT-FOOT.
038100 DEPT-FOOT-PROC.
038200     MOVE DEPT-FOOT-GROSS TO DE-GROSS (DE-IX).
038300     MOVE DEPT-FOOT-FICA TO DE-FICA (DE-IX).
038400     MOVE DEPT-FOOT-FWT TO DE-FWT (DE-IX).
038500     MOVE DEPT-FOOT-MISC TO DE-MISC (DE-IX).
038600     MOVE DEPT-FOOT-NET TO DE-NET (DE-IX).
      *     SUPPRESS PRINTING.
038700
038800 DEPT-FOOT-EXIT.
038900     EXIT.
039000
039100 COMP-FOOT-USE SECTION. USE BEFORE REPORTING COMP-FOOT.
039200 COMP-FOOT-PROC.
039300     PERFORM COMP-FOOT-CALC
039400         VARYING WPCD-IX FROM +1 BY +1
039500         UNTIL WPCD-IX > +6.
039600     GO TO COMP-FOOT-EXIT.                                        
039700
039800 COMP-FOOT-CALC.
039900     SET DE-IX TO WPCD-IX.
040000     SET WPCC-IX TO +1.
040100     COMPUTE WPC-PERCENT (WPCD-IX WPCC-IX) ROUNDED =
040200         ((DE-GROSS (DE-IX) / CO-GROSS) * 100) + .5.
040300     SET WPCC-IX TO +2.
040400     COMPUTE WPC-PERCENT (WPCD-IX WPCC-IX) ROUNDED =
040500         ((DE-FICA (DE-IX) / CO-FICA) * 100) + .5.
040600     SET WPCC-IX TO +3.
040700     COMPUTE WPC-PERCENT (WPCD-IX WPCC-IX) ROUNDED =
040800         ((DE-FWT (DE-IX) / CO-FWT) * 100) + .5.
040900     SET WPCC-IX TO +4.
041000     COMPUTE WPC-PERCENT (WPCD-IX WPCC-IX) ROUNDED =
041100         ((DE-MISC (DE-IX) / CO-MISC) * 100) + .5.
041200     SET WPCC-IX TO +5.
041300     COMPUTE WPC-PERCENT (WPCD-IX WPCC-IX) ROUNDED =
041400         ((DE-NET (DE-IX) / CO-NET) * 100) + .5.
041500
041600 COMP-FOOT-EXIT.
041700     EXIT.
041800
041900 END DECLARATIVES.
042000
042100 000-INITIATE.
042200
042300     OPEN INPUT PAYROLL-REGISTER-DATA,
042400          OUTPUT REPORT-FILE.
042500
042600     INITIATE QUARTERLY-PAY-REGISTER.
042700
042800     READ PAYROLL-REGISTER-DATA
042900         AT END
043000             MOVE 'Y' TO END-OF-FILE-SWITCH.
043200
043300     PERFORM 100-PROCESS-PAYROLL-DATA THRU 199-EXIT
043400         UNTIL END-OF-FILE.
043500
043600 000-TERMINATE.
043700     TERMINATE QUARTERLY-PAY-REGISTER.
043800
043900     CLOSE PAYROLL-REGISTER-DATA,
044000           REPORT-FILE.
044100
044200     STOP RUN.
044300
044400 100-PROCESS-PAYROLL-DATA.
044500     GENERATE QUARTERLY-PAY-REGISTER.
044600     READ PAYROLL-REGISTER-DATA
044700         AT END
044800             MOVE 'Y' TO END-OF-FILE-SWITCH.
045000
045100 199-EXIT.
045200     EXIT.
045300
