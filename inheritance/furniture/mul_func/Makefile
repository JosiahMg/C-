furniture:main.o furniture.o
	g++ -o $@ $^

main.o:main.cpp
	g++ -c main.cpp

furniture.o:furniture.cpp
	g++ -c furniture.cpp

clean:
	rm -rf *.o furniture
