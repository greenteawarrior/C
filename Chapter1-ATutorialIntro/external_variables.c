/*C Programming Language 1.10: External Variables and Scope
11/24/2013, Emily Wang*/

/*
same program as the character_arrays.c script, 
but now with external variables (aka global variables) for line, longest, and max
FYI: don't use external variables! they're there, when you want and don't want them, and it makes it harder to modify the overall program
*/

/*
external variable is defined EXACTLY ONCE outside of any function (so there's storage for it)
external variable is declared in EACH FUNCTION that wants to use it (states type of var)
*/


#include <stdio.h>

//symbolic constants
#define MAXLINE 1000 //max input line size

//le variables
int max; //max length thus far
char line[MAXLINE]; //current input line pos
char longest[MAXLINE]; //longest line info stored here

//le functions
int getline(void);
void copy(void);

//print the longest input line, specialized version w/ external variables
main ()
{
    int len;
    extern int max;
    extern char longest[MAXLINE];

    max = 0;
    while ((len = getline()) > 0)
        if (len > max) { //if it's a new max, store it as the new max
            max = len;
            copy();
        }
    if (max > 0) //there was a line!
        printf ("%s", longest);
    return 0;
}

//getline function: the specialized version w/ external variables
int getline(void)
{
    int c, i;
    extern char line[MAXLINE];

    for (i = 0; i < MAXLINE - 1 
             && (c=getchar()) != EOF
             && c != '\n';
             ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    } 
    line [i] = '\0';
    return i;
}

//copy function: the specializd version w/ external variables
void copy(void)
{
    int i;
    extern char line[MAXLINE], longest[MAXLINE];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}