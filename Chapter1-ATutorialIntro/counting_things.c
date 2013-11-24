/*C Programming Language 1.5.3, 
Character Input and Output:
Line Counting Exercises
11/23/2013, Emily Wang*/

#include <stdio.h>

main()
{
    //declare variables
    int c;
    char desiredstr = '\n'; //can also be \t or \\ to search for other things

    //also replacing tabs, backspaces, and blackslashes with the escape strings
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        if (c != '\b')
            if (c != '\t')
                if (c != '\\')
                    putchar(c);
    }
}
