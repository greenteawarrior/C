/*
C Programming Language 2.9:
Bitwise Operators
Exercise 2-6
11/28/2013, Emily Wang
*/

//setbits: returns x with the n bits that begin at position p 
//         set to the rightmost n bits of y, leaving the other bits unchanged

#include <stdio.h>

//declare stuff
unsigned setbits(unsigned x, int p, int n, unsigned y);


main()
{
    unsigned int x = 0xF994;        // 0b11111001100.101.00
    int p = 4;
    int n = 3;
    unsigned int y = 0xA883;        // 0b1010100010000.011.
    int z = setbits(x, p, n, y);    // 0b11111001100.011.00

    printf("setbits(%x, %i, %i, %x) = %x\n", x, p, n, y, z);
}

//the setbits function
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0 << n) << (p+1-n)) | ((y &  ~(~0 << n)) << (p+1-n));
}

/*
//breaking down the steps

//we want to set n bits of x to the rightmost n bits of y
xxx ... xnnnx ... xxx    x
yyy .............ynnn    y

//four general steps: 
1. clear the n bits in x 
2. clear all bits in y except the rightmost n bits
3. shift those bits in y to position p
4. OR the quantities together

xxx ... x000x ... xxx    x
000 ... 0nnn0 ... 000    y
--------------------------
xxx ... xnnnx ... xxx    x


1. clear the n bits in x : we AND them with n bits of zeros starting at position p and ones everywhere else
~0 << n //shifts all ones (~0 thing) n positions to the left, leaving n zeros at the rightmost positions
~(~0 << n) //now all digits at the rightmost positions are ones, zeros everywhere else
~(~0 << n) << (p+1-n) //shifting these n 1-bits to position p
~(~(~0 << n) << (p+1-n)) //sets n bits to zeros starting at position p, leavings ones everywhere else
x & ~(~(~0 << n) << (p+1-n)) //AND this thinger with x to clear the n bits of x at position p


2. clear all bits in y except the rightmost n bits : AND the bits with n bits of ones and zeros everywhere else
~(~0 << n) //places all ones at the rightmost n positions, zeros everywhere else
y & ~(~0 << n) //selects the rightmost n bits of y

3. shift those bits in y to position p
(y & ~(~0 << n)) << (p+1-n) //places these n bits starting at position p

4. OR the quantites from #1 and #3 together
x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n)
*/