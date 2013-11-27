/*
C Programming Language 2.8:
Increment and Decrement Operators
Exercise 2-5 any(s1,s2)
11/26/2013, Emily Wang
*/

//any(s1,s2) returns the first location in the string s1 where any character from the string s2 occurs
//returns -1 if s1 contains no characters from s2
//standard library func strpbrk does the same thing but returns a pointer to the location

#include <stdio.h>

//declare things
char s1[] = "meepit vs "; 
char s2[] = "feepit!";
int n;
int any(char s1[], char s2[]);

main()
{
    n = any(s1,s2);
    printf("%i is the first location in the string s1 where any character from the string s2 occurs.\nThe matching letter is %c.\n", n, s1[n]);
}

//any(s1, s2) function definition
int any(char s1[], char s2[])
{
    int i, j; //index variables

    //searching for matches
    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j]) // do they match?
                return i;       // this is the desired result

    return -1; // no matches found.
}   