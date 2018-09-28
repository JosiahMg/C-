animal:main.o animal.o
	g++ -o $@ $^

main.o:main.cpp
	g++ -c main.cpp

animal.o:animal.cpp
	g++ -c animal.cpp

clean:
	rm -rf *.o animal
