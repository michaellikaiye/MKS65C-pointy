#include<stdio.h>
int main() {
  unsigned int x =34;
  char * c = &x;
  printf("int: %x \n", x);
  printf("char: %hhx \n", c);
}
