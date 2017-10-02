#include <stdio.h>

int main(int arg, char* argc[]){
  int a;
  int* b;
  long c;
  double * d;
  char ** f;
  printf("%d\n", sizeof(a) );
  printf("%d\n", sizeof(b) );
  printf("%d\n", sizeof(c) );
  printf("%d\n", sizeof(d) );
  printf("%d\n", sizeof(f) );
  return 0;
}
