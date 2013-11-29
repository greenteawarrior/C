/*
C Programming Language 2.9:
Bitwise Operators
Exercise 2-8
11/28/2013, Emily Wang
*/

//rightrot(x,n) returns the value of the integer x rotated 
//to the right by n bit positions

#include <stdio.h>

//declare stuff
unsigned rightrot(unsigned x, int n);
int wordlength(void);

main()
{
    unsigned int x = 0xF824;         // 0b1111100000100100
    int n = 1;
    unsigned int z = rightrot(x, n); // 0b0111110000010010 

    printf("rightrot(%x, %i) = %x\n", x, n, z);
}


//the rightrot function
unsigned int rightrot(unsigned x, int n)
{
    int y = wordlength();
    int rbit; //rightmost bit

    while (n-- > 0){
        rbit = (x & 1) << (y - 1); //takes the rightmost bit of x and shifts it to the leftmost position (wordlength() - 1)
        x = x >> 1;   //shift x one position to the right
        x = x | rbit; //complete one rotation
    }
    return x;
}

//the wordlength funtion: computes word length of the machine
int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;

    for (i = 1; (v = v >> 1) > 0; i++)
        ;
    return i;
}

