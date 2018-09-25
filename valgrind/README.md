
sudo apt-get install valgrind

Valgind is an instrumentation framework for building dymamic tools.
There are Valgind tools that can automatically detect many memory manmagement and threading bugs,
and profile your program in detail. You can also use valgrind to build tools.


gcc -o test main.c
valgrind --tool=memcheck --show-reachable=yes --leak-check=yes ./test


Check leak and overwrite(Invalid write of size):

char *data = (char *)malloc(10);  //leak, not free
memset(data, 0x00, 10);
memcpy(data, "01234567890", 11);  //Invalid write of size 1
