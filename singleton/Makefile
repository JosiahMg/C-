singleton:main.o singleton.o
	g++ -o singleton singleton.cpp main.cpp

singleton.o:singleton.cpp
	g++ -c singleton.cpp

main.o:main.cpp
	g++ -c main.cpp

clean:
	rm -rf singleton main.o singleton.o
