build: main.cpp Creature.h
	g++ -o exec main.cpp

run: exec
	./exec