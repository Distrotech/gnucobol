      * Development by Ed Borchert (http://www.borchert.nl) and
      *                Ronald Heirbaut (http://www.tayale.nl)
      * Copyright (C) 2013 Ed Borchert
      * Copyright (C) 2013 Ronald Heirbaut
      *
      * This library is free software; you can redistribute it and/or
      * modify it under the terms of the GNU Lesser General Public
      * License as published by the Free Software Foundation; either
      * version 2.1, or (at your option) any later version.
      *
      * This library is distributed in the hope that it will be useful,
      * but WITHOUT ANY WARRANTY; without even the implied warranty of
      * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      * GNU Lesser General Public License for more details.
      *
      * You should have received a copy of the GNU Lesser General Public
      * License along with this library; see the file COPYING.LIB.  If
      * not, write to the Free Software Foundation, 51 Franklin Street,
      * Fifth Floor Boston, MA 02110-1301 USA

       identification division.
       program-id. animod.
       environment division.
       input-output section.
       file-control.
       select anifile assign ani-path
                      organization is  indexed
                      access mode  is  dynamic
                      record key   is  ani-key
                      file status  is  ani-status.
       data division.
       file section.
       fd anifile.
       01 ani-rec.
          03  ani-key                        pic x(7).
          03  ani-rest                       pic x(67).
       working-storage section.
       01  file-path-info.
           03  ani-path                      pic x(256).
       01  path-line                         pic x(4096).
       linkage section.
       01  interface-block.
           03  action                        pic x.
           03  ani-status                    pic 99.
           03  ani-data                      pic x(74).
       procedure division using interface-block.
       h00.
      *    display "IN " interface-block.
           move "00" to ani-status.
           if action = "O"
               move ani-data to ani-path
               open output anifile
               close anifile
               open i-o anifile
               go to h90.
 
           if action = "C"
               close anifile
               go to h90.

           if action = "R"
               move ani-data to ani-rec
               read anifile
                   key is ani-key
                   invalid key move "23" to ani-status
                               go to h99
               end-read
               move ani-rec to ani-data
               go to h99.

           if action = "W"
               move ani-data to ani-rec
               write ani-rec
               go to h99.

           if action = "U"
               move ani-data to ani-rec
               rewrite ani-rec
               go to h99.

           if action = "N"
               read anifile next
                   at end move "10" to ani-status
                          go to h99
               end-read
               move ani-rec to ani-data
               go to h99.

           if action = "S"
               move ani-data to ani-rec
               start anifile
                   key not less ani-key
                   invalid key move "23" to ani-status
                   go to h99
               end-start.
           move ani-rec to ani-data.
           go to h99.
       h90.
           move spaces to ani-data.
       h99.
      *    display "OU " interface-block.
           exit program.
