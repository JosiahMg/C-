car: main.o car.o
	g++ -o $@ $^

main.o:main.cpp
	g++ -c main.cpp

car.o:car.cpp
	g++ -c car.cpp

clean:
	rm -rf *.o car
