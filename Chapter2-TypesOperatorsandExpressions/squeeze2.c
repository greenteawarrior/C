/*
C Programming Language 2.8:
Increment and Decrement Operators
Exercise 2-4 More squeeze
11/26/2013, Emily Wang
*/

//squeeze2(s1, s2) deletes each character in s1 that matches any character in s2

#include <stdio.h>

//declare things
char s1[] = "hzrerrrlglso!!"; 
char s2[] = "zargs";
void squeeze2(char s1[], char s2[]);

main()
{
    squeeze2(s1, s2);
    printf("%s\n", s1);
}

//squeeze2 function definition
void squeeze2(char s1[], char s2[])
{
    int i, j, k; //index variables

    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ; //the work is in the for statement line, so empty for body
        if (s2[j] == '\0') //end of string - no match
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}   