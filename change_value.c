#include <stdio.h>

int main(int argc, char **argv) {
  int a = 5;
  int b = 6;
  int c;
  
  c = a;
  a = b;
  b = c;
  
  printf("a=%d, b=%d", a, b);
  
  return 0;
}
