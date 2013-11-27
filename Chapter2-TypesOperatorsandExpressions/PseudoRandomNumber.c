/*
C Programming Language 2.7:
Type Conversions
11/26/2013, Emily Wang
*/

//generates a pseudo-random integer between 0 and 32767

#include <stdio.h>

unsigned long int next=1;

int rand(void);
int x;

main()
{   
    x = rand();
    printf("%i\n", x);
}

//rand function
int rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768; //typecasting!
}

