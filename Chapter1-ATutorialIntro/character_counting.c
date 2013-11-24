/*C Programming Language 1.5.2, 
Character Input and Output: 
Character Counting
Mostly running through the examples and tweaking it for the learning experience!
11/23/2013, Emily Wang*/

#include <stdio.h>

//count characters in input, first version

main()
{
    long nc;
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d \n", nc);
}