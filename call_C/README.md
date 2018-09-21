How to call C program in C++ ?

You need to add the following code in *.h files:

#ifdef __cplusplus
extern "C"
{
#endif



....          (function declaration of C program)
void foo();



#ifdef __cplusplus
}
#endif
