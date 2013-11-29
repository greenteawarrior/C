/*
C Programming Language 2.10:
Conditional Expressions
Exercise 2-10
11/28/2013, Emily Wang
*/

//conditional expressions!

#include <stdio.h>
int c='L';
char lower(char c);

main()
{
    printf("%c as a lowercase letter is %c.\n", c, lower(c));
}


//rewritten lower, the function which converts upper case letters to lower case,
//with a conditional expression rather than an if-else
//lower: convert c to lower case (ASCII only)
char lower(char c)
{
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}

/*
when c >= 'A' && c <= 'Z' 
is true, then c is an uppercase letter.

then c + 'a' - 'A' 
is evaluated and lower returns the lower case letter.
otherwise, the character is returned unchanged
*/