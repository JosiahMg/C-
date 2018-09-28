fruit:main.o fruit.o
	g++ -o $@ $^

main.o:main.cpp
	g++ -c main.cpp

fruit.o:fruit.cpp
	g++ -c fruit.cpp

clean:
	rm -rf *.o fruit
