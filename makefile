CC=g++
FLAGS=-Wall -Wextra
SFMLFLAGS=-lsfml-graphics -lsfml-window -lsfml-system
EXEC=VeCtorPP.bin

CPPVERSION=17
FILES=main.cpp Point.cpp

all: clear compil run

compil: clear
	$(CC) -std=c++$(CPPVERSION) $(FLAGS) $(SFMLFLAGS) $(FILES) -O2 -o bin/$(EXEC)

run: clear
	./bin/$(EXEC)

clean: clear
	rm -rf bin/$(EXEC)

clear:
	clear