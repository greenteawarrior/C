/*C Programming Language 1.5.1, 
Character Input and Output: 
File Copying
Mostly running through the examples and tweaking it for the learning experience!
11/23/2013, Emily Wang*/


#include <stdio.h>

//copy input to output; first version

main ()
{
    int c;

    while  ((c = getchar()) != EOF){ //EOF is an integer defined in <stdio.h> <<- it's a symbolic constant??
        putchar(c);
    }

    //control D for the EOF when running this script from terminal
    //EOF is -1
    printf("EOF is %d\n", EOF);

}