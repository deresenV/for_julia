start: quadrats.o
	gcc -o quadrats quadrats.o

quadrats.o: quadrats.c
	gcc -c quadrats.c
