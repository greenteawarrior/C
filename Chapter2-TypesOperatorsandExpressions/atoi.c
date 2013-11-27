/*
C Programming Language 2.7:
Type Conversions
11/26/2013, Emily Wang
*/

//takes in a string of numbers and prints out the integer equivalent

#include <stdio.h>

//declare it!
char numberstr[] = "216"; //numberstr of interest
int atoi(char numberstr[]); //our helper function

main()
{
    //run the atoi function and print the result
    printf("%i \n", atoi(numberstr));
}

// atoi : convert numberstr to integer
int atoi(char numberstr[])
{
    int i, n;

    n = 0;
    for (i = 0; numberstr[i] >= '0' && numberstr[i] <= '9'; ++i)
        n = 10 * n + (numberstr[i] - '0'); //factor of ten for each digit (since we're in decimal)
    return n;
}