build: main.cpp creature.h
	g++ -o exec main.cpp

run: exec
	./exec