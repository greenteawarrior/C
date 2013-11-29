/*
C Programming Language 2.9:
Bitwise Operators
Exercise 2-7
11/28/2013, Emily Wang
*/

//invert(x,p,n) returns x with the n bits that begin at 
//position p inverted, leaving the others unchanged

#include <stdio.h>

//declare stuff
unsigned invert(unsigned x, int p, int n);


main()
{
    unsigned int x = 0xF994;  // 0b11111001100.101.00
    int p = 4;
    int n = 3;
    int z = invert(x, p, n);  // 0b11111001100.010.00 

    printf("invert(%x, %i, %i) = %x\n", x, p, n, z);
}

//the invert function
unsigned invert(unsigned x, int p, int n)
{
    return x ^ (~(~0 << n) << (p+1-n));
}

/*
//breaking down the steps
(~0 << n) //shifts all ones n positions to the left, leaving n zeros at the rightmost positions
~(~0 << n) //places all ones at the rightmost positions, zeros everywhere else
(~(~0 << n) << (p+1-n)) //shifts these n 1-bits to position p
x ^ (~(~0 << n) << (p+1-n)) //excluse OR operator will invert as desired

to explain the exclusive OR things:
XOR returns 1 when the two bits are different, otherwise returns 0

you're XORing x with the (~(~0 << n) << (p+1-n)) term. 
the (~(~0 << n) << (p+1-n)) term contains 1's for the n bits (part 1) and 0's for all the other bits (part 2)

(part 1)
for the n bits starting at position p, it works to XOR these n bits with 1s:
if the original bit is 0, then XOR with a 1 produces a 1 : invert successful
if the original bit is 1, then XOR with a 1 prodcues a 0 : invert successful

(part 2)
for all of the other bits, it works to XOR these bits with 0s 
[when XOR has no inverting effect (they're unchanged, as desired)]
if the original bit is 0, then XOR with 0 produces 0 : unchanged
if the original bit is 1, then XOR with 0 produces 1 : unchanged

whee!
*/
