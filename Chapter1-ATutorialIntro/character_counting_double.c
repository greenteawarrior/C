/*C Programming Language 1.5.2, 
Character Input and Output:
Character Counting
11/23/2013, Emily Wang*/

//count characters in input, second version with double precision floats and a for statement

#include <stdio.h>

main()
{
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
        ; 
    //body of this for loop is empty b/c all the work is in the test + increment parts, but syntax requires a body still
    //isolated semicolon is known as a null statement
    printf("%.0f\n", nc);
}

/*
nice thing about this function w/ a while or for loop:
the loop fails on the very first call with getchar if the input is empty, and then 
the program prints 0, which is the correct answer :D
*/