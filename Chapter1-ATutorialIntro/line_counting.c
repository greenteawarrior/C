/*C Programming Language 1.5.3, 
Character Input and Output: 
Line Counting
11/23/2013, Emily Wang*/

#include <stdio.h>

//count lines in input!

main()
{
    //declare variables
    int c, nl;
    char desiredstr = '\n'; //can also be \t or \\ to search for other things

    //counting lines is just counting newlines
    nl=0;
    while ((c = getchar()) != EOF)
        if (c == desiredstr)  // unlike Python, in C, ' vs " matters!
            ++nl;
    printf("%d\n", nl);
}
