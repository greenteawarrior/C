/*
C Programming Language 3.4:
Switch
11/29/2013, Emily Wang
*/

#include <stdio.h>

main() //counts digits, whitespace, and other spiffy things
{
    int c, i, nwhite, nother, ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            //if there's a number, increment the digit total
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                ndigit[c-'0']++;
                break;

            //if there's whitespace, increment the whitespace total
            case ' ': case '\n': case '\t':
                nwhite++;
                break;

            //if there's other things (i.e. letters, words, etc), increment the other total
            default:
                nother++;
                break;
        }
    }
    //printing the result for the user to see
    printf("digits =");
    for (i = 0; i < 10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}
