/*C Programming Language 1.9: Character Arrays
11/25/2013, Emily Wang*/

//this program will read a set of text lines and print the longest line
//uses automatic variables (aka local variables, automatic is the official term for this book)

#include <stdio.h>

#define MAXLINE 1000 //max input line length

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//printing the longest input line
main()
{
    //yay variables
    int len; //current line length
    int max; //max length thus far
    char line[MAXLINE]; //current input line pos
    char longest[MAXLINE]; //longest line text saved here

    max = 0;
    while ( (len = getline(line, MAXLINE)) > 0 )
        if (len > max) {
            max = len;
            copy(longest, line); 
            /*copy has no return value; 
            it's just moving things from line 
            into longest b/c line now 
            contains the max-length line thus far */
        }
    if (max > 0) //there was a line!
        printf("The longest line's content is: %s", longest);
    return 0;
}

//getline function: read a line into s, return its length
int getline(char s[], int lim) //should work even in overflow cases
{
    //local variables
    int c, i;

    //determine length of the line content
    for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i; 
    }
    s[i] = '\0'; //indicates the end of a string, '\0' is the null character
    return i;
}

//copy function: copy 'from' into 'to'; assume to is big enough for this to work
void copy(char to[], char from[])
{
    //local variables
    int i;

    //copying 'from' into 'to'
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

//design: potential things to think about
//dealing with overflow - getline works still
//you can test for overflow in the main function