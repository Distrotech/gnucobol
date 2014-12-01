        identification division.
        program-id. testprog.

        data division.
        working-storage section.

        01 testvar pic x(10) value "a1b2ccddee".

        procedure division.

        display "Testvariable: " testvar end-display
        display "Testprog - 1" end-display
        
        call "testprog2" end-call
        
        stop run.
