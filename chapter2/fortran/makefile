# General makefile for c - choose PROG = name of given program
# Here we define compiler option, libraries and the target

FC = gfortran 
PROG= hello_world

OBJS = ${PROG}.o

${PROG} : 	${OBJS}
			${FC} ${OBJS} -o ${PROG} 

${PROG}.o : ${PROG}.f90
			${FC} -c ${PROG}.f90

clean :
	\rm *.o *.exe
