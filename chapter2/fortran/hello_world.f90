
      PROGRAM shw
          IMPLICIT NONE
          REAL (KIND=16) :: r, s

          WRITE(*,*) 'Input a number: '
          READ (*,*) r

          s = SIN(r)

          WRITE (*,*) 'Hello, World! sin(', r,') = ', s

          s = COS(r)

          WRITE (*,*) 'Hello, World! cos(', r,') = ', s

      END PROGRAM shw 
