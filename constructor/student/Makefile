test:main.o student.o
	g++ -o test main.o student.o

main.o:main.cpp
	g++ -c main.cpp

student.o:student.cpp
	g++ -c student.cpp

clean:
	rm -rf *.o test
