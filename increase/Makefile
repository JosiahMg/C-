increase:main.o increase.o
	g++ -o $@ $^

main.o:main.cpp
	g++ -c main.cpp

increase.o:increase.cpp
	g++ -c increase.cpp

clean:
	rm -rf *.o increase
