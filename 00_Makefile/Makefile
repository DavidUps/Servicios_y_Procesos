suma: suma.o main.o
	g++ suma.o main.o -o suma

main.o: main.cpp suma.h
	g++ -c main.cpp

suma.o: suma.cpp suma.h
	g++ -c suma.cpp

.PHONY: clean

clean:
	rm --r *.o
