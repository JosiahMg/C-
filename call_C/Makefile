test:main.o foo.o
	g++ -o $@ $^

main.o:main.cpp
	g++ -c $^ -o $@

foo.o:foo.c
	gcc -c $^ -o $@

clean:
	rm -rf *.o test
