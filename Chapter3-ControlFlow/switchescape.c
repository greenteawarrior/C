/*
C Programming Language 3.4:
Switch
Exercise 3-2
11/29/2013, Emily Wang
*/


#include <stdio.h>
char s[12];
char t[12] = "s\ts";
void escape(char s[], char t[]);

main()
{
    escape(s, t);
    printf("%s\n%s\n", t, s);
}

void escape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++)
    
    //copying the string t to s, with whitespace escapes
    switch (t[i]) {
        //replace newline with \n
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        //replace tab with \t
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        //normal characters
        default:
            s[j++] = t[i];
            break;
    }    
    s[j] = '\0'; //end it
}
