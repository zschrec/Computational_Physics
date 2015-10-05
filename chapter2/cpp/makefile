# General makefile for c - choose PROG = name of given program
# Here we define compiler option, libraries and the target

CC= g++ 
PROG= hello_world

OBJS = ${PROG}.o

${PROG} : 	${OBJS}
			${CC} ${OBJS} -o ${PROG} 

${PROG}.o : ${PROG}.cpp
			${CC} -c ${PROG}.cpp
