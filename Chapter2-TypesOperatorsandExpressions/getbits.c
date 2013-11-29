/*
C Programming Language 2.9:
Bitwise Operators
11/28/2013, Emily Wang
*/

//getbits: get n bits from position p
//returns the right adjusted n-bit field of x that begins at position p

#include <stdio.h>

//declare stuff
unsigned getbits(unsigned x, int p, int n);


main()
{
    unsigned int x = 0xF994;
    int p = 4;
    int n = 3;
    int z = getbits(x, p, n);

    printf("getbits(%u (%x), %d, %d) = %u (%X)\n", x, x, p, n, z, z);
}

//the getbits function
unsigned int getbits(unsigned int x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

// //some intermediate helpful observations from http://stackoverflow.com/questions/197614/k-r-question-need-help-understanding-getbits-method-in-chapter-2
// this is helpful b/c it shows the things happening in binary
// ff94             11111111100.101.00  # original number
// >> p+1-n     [2] 0011111111100.101.  # shift desired bits to right
// & ~(~0 << n) [7] 0000000000000.101.  # clear all the other (left) bits