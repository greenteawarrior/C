/*
C Programming Language 2.8:
Increment and Decrement Operators
11/26/2013, Emily Wang
*/

//strcat: concates t to the end of s, assuming there's enough space in s to hold the concatenated strings

#include <stdio.h>

//declare things
char s[] = "I like ";
char t[] = "robots!";
void strcat(char s[], char t[]);

main()
{
    strcat(s, t);
    printf("%s\n", s);
}

//strcat function definition
void strcat(char s[], char t[])
{
    int i, j; //index variables

    i = j = 0;
    while (s[i] != '\0') //find the end of s
        i++;
    while ((s[i++] = t[j++]) != '\0') //copying t onto the end of s, one char at a time
        ;
}   

