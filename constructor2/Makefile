constructor:main.o person.o
	g++ -o $@ $^

main.o:main.cpp
	g++ -c main.cpp

person.o:person.cpp
	g++ -c person.cpp

clean:
	rm -rf constructor main.o person.o
