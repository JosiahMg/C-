fk:main.o fkstring.o
	g++ -o fk $^

main.o:main.cpp
	g++ -c main.cpp

fkstring.o:fkstring.cpp
	g++ -c fkstring.cpp

clean:
	rm -rf main.o fkstring.o fk
