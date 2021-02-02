#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{
  printf("int_max = %i\n", INT_MAX);
  int x = 0;
  if (scanf("%d", &x )!=1) return -1;

  //e.g. x = INT_MAX can trigger integer overflow
  x *= 1000000;
  printf("x = %i\n", x);
  return 0;
}


//~/Downloads/afl/afl-clang -fsanitize=undefined -fsanitize-undefined-trap-on-error hello_ubsan.c

//~/Downloads/afl/afl-fuzz -i in -o out -- ./a.out
