/*
   Declares and initializes an unsigned int to some value > 2.1 billion.
   Declare a char * that points to the address of your unsigned int.

    Yes, I really do mean char *

   Print out your int in hex.

    The formatting character for a hexadecimal int is: %x

   Use your pointer to print out each individual byte of your int.

    The formatting character for a single byte in hex is %hhx, that is half of half of an integer.

   Using your pointer, modify the individual bytes of your int and print out the resulting value in hex and decimal after each modification.

    Increment each byte by 1
    Increment each byte by 16
 */

#include <stdio.h>
unsigned int x = 3216549870;
char * c = &x;
int i;
int main() {
	printf("byte values of x \n");
  for(i = sizeof(x) - 1 ; i >= 0 ; i--)
		printf("byte %d: %hhx   ", i, *(c + i));
	printf("\npointer in hex: %0x \n", c);
	printf("dec value: %u \nhex value: %x \n", x, x);

	printf("\nbyte values after incrementing by each byte 1\n");
	for(i = sizeof(x) - 1 ; i >= 0 ; i--) 
		printf("byte %d: %hhx   ", i, ++*(c + i));
	printf("\npointer in hex: %0x \n", c);
	printf("dec value: %u \nhex value: %x \n", x, x);

	printf("\nbyte values after incrementing by each byte 16\n");
	for(i = sizeof(x) - 1 ; i >= 0 ; i--)
		printf("byte %d: %hhx   ", i, *(c + i) += 16);
	printf("\npointer in hex: %0x \n", c);
	printf("dec value: %u \nhex value: %x \n", x, x);
}
