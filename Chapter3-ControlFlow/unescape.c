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


/*unescape: convert escape sequences into real characters 
while copying the string t to s*/
void escape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++)
        if (t[i] != '\\')
            s[j++] = t[i];
        else //there's a backslash that must be escaping something!    
            switch (t[++i]) {
                //replace \n with real newline
                case 'n':
                    s[j++] = '\n';
                    break;
                //replace \t with real tab
                case 't':
                    s[j++] = '\t';
                    break;
                //other situations
                default:
                    s[j++] = '\\';
                    s[j++] = t[i];
                    break;
    }    
    s[j] = '\0'; //end it
}
