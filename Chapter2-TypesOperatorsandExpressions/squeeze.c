/*
C Programming Language 2.8:
Increment and Decrement Operators
11/26/2013, Emily Wang
*/

//squeeze: deletes all of the occurences of c from s

#include <stdio.h>

//declare things
char s[] = "Robots";
int c = 'o';
void squeeze(char s[], int c);

main()
{
    squeeze(s, c);
    printf("%s\n", s);
}

//squeeze function: removes all occurrences of the character c from the string s
void squeeze(char s[], int c)
{
    int i, j; //index variables

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

