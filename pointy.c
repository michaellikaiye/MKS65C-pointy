#include <stdio.h>
unsigned int x = 3216549870;
char * c = &x;
int i;
int main() {
  printf("byte values of x \n");
  for(i = sizeof(x) - 1 ; i >= 0 ; i--)
    printf("byte %d: %hhx   ", i, *(c + i));
  printf("\npointer in hex: %x \n", c);
  printf("dec value: %u \nhex value: %x \n", x, x);

  printf("\nbyte values after incrementing by each byte 1\n");
  for(i = sizeof(x) - 1 ; i >= 0 ; i--) 
    printf("byte %d: %hhx   ", i, ++*(c + i));
  printf("\npointer in hex: %x \n", c);
  printf("dec value: %u \nhex value: %x \n", x, x);

  printf("\nbyte values after incrementing by each byte 16\n");
  for(i = sizeof(x) - 1 ; i >= 0 ; i--)
    printf("byte %d: %hhx   ", i, *(c + i) += 16);
  printf("\npointer in hex: %x \n", c);
  printf("dec value: %u \nhex value: %x \n", x, x);

  return 0;
}
