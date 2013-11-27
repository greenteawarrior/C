/*
C Programming Language 2.7:
Type Conversions
Exercise 2-3
11/26/2013, Emily Wang
*/

//converts a string of hexadecimal digits to its equivalent integer value

#include <stdio.h>

//symbolic constants
#define YES 1
#define NO  0

//declaring things
int htoi(char s[]);
char h[] = "0x123";

main()
{
    printf("%i\n", htoi(h));
}

//htoi: convert hexadecimal string s to integer
int htoi(char s[])
{
    int hexdigit; //value for the current digit
    int i; //index
    int inhex; //is this really a hexadecimal number?
    int n; //the equivalent integer value

    i = 0;

    //hexadecimal strings tend to start with 0x or 0X, we 
    //don't care about this suffix for the integer value so
    //the indices should "skip" through it
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
    }
    n = 0; //that equivalent integer value
    inhex = YES; //assume valid hexadecimal digit
    for (; inhex == YES; ++i) {
        if (s[i] >= '0' && s[i] <= '9') //converting the hex 0123456789
            hexdigit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f') //converting the hex abcdef
            hexdigit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            hexdigit = s[i] - 'A' + 10;
        else
            inhex = NO; //htoi won't happen if the input isn't hex...
                        //but we arbitrarily set inhex = YES at the beginning
                        //if you were to use this program in different contexts, then maybe you would set up a hexadecimal test at the beginning of this program
        if (inhex == YES)
            n = 16 * n + hexdigit; //each digit is an order of 16; 
    }
    return n;
}