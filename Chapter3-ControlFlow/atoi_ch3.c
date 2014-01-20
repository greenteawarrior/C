/*
C Programming Language 3.5:
Loops - While and For
11/29/2013, Emily Wang
*/

#include <stdio.h>
#include <ctype.h>

//declaring stuff
char s[] = "12345";
int atoi(char s[]);

//a more general atoi function (can account for leading white space and +/- sign)
main()
{
    printf("s converted to integer %i\n", atoi(s));
}


//atoi: convert s to integer; version 2
int atoi(char s[])
{
    int i, n, sign;

    //skip the whitespace
    for (i = 0; isspace(s[i]); i++)
        ;

    //if it's pos/neg, multiply by 1 or -1 to achieve correct value at the end
    sign = (s[i] == '-') ? -1 : 1;

    //have the index bypass the sign if there is one
    if (s[i] == '+' || s[i] == '-')
        i++;    

    //the digits!
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');

    //making it positive or negative
    return sign * n;
}