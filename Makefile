<<<<<<< HEAD
all:
	gcc -Isrc/Include -Lsrc/lib -o main main.c -lmingw32 -lSDL2main -lSDL2
=======
gcc -Isrc/Include -Lsrc/lib -o main main.c scores.c graphic.c logic.c -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf                                                   
>>>>>>> bcdf400 (test)
