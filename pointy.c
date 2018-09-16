/*
   Declares and initializes an unsigned int to some value > 2.1 billion.
   Declare a char * that points to the address of your unsigned int.

    Yes, I really do mean char *

   Print out your int in hex.

    The formatting character for a hexadecimal int is: %x

   Use your pointer to print out each individual byte of your int.

    The formatting character for a single byte in hex is %hhx, that is half of
        half of an integer.

   Using your pointer, modify the individual bytes of your int and print out the
   resulting value in hex and decimal after each modification.

    Increment each byte by 1
    Increment each byte by 16
 */

#include <stdio.h>
int main() {
	unsigned int x = 3216549870;
	char * c = &x;
	int i;
	printf("int: %u \n", x);
	printf("hex version: %x \n", x);
	printf("pointer in hex: %x \n", c);
	printf("\nbyte values of int \n");
	for(i = 0 ; i < sizeof(x) ; i++)
		printf("byte %d: %hhx   ", i, *(c + i));
	printf("\n\nbyte values after incrementing by each byte 1\n");
	for(i = 0 ; i < sizeof(x) ; i++) {
		*(c + i) += 1;
		printf("byte %d: %hhx   ", i, *(c + i));
	}
	printf("\ndec value after incrementing each byte by 1: %u \n", x);
	printf("hex value after incrementing each byte by 1: %x \n", x);
	printf("\nbyte values after incrementing by each byte 16\n");
	for(i = 0 ; i < sizeof(x) ; i++) {
		*(c + i) += 16;
		printf("byte %d: %hhx   ", i, *(c + i));
	}
	printf("\ndec value after incrementing each byte by 16: %u \n", x);
	printf("hex value after incrementing each byte by 16: %x \n", x);

}
