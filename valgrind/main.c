#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void)
{
  char *data = (char *)malloc(10);
  memset(data, 0x00, 10);
  memcpy(data, "01234567890", 11);
  //free(data);
  return 0;
}
