/*
C Programming Language 3.5:
Loops - While and For
11/29/2013, Emily Wang
*/

#include <stdio.h>
#include <string.h>

//declaring stuff

char s[] = "Hello!";
void reverse (char s[]);


main()
{
    printf("%s\n", s);
    reverse(s);
    printf("%s\n", s);
}


//reverse: reverse string s in place
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}