SRC = Cola.cpp Elemento.cpp
OBJ = Cola.o Elemento.o

all:
	g++ -c ${SRC}
	g++ ${OBJ} main.cpp -o cola

