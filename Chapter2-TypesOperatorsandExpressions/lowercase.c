/*
C Programming Language 2.7:
Type Conversions
11/26/2013, Emily Wang
*/

//converts input character to lowercase character (ASCII)
//if original character was already lowercase, it just returns the input unchanged
//this script was created before knowing about the <ctype.h> library


#include <stdio.h>

//declaring!
char c1 = 'A'; //test case 1
char c2 = 'a'; //test case 2
char lower(char c);

main ()
{
    printf("%c\n%c\n", lower(c1), lower(c2));
}

//lower function: convert c to lower case, ASCII only
char lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

//varies on machine architecture: are char variables signed or unsigned integers?? (sometimes sign extension happens, sometimes it doesn't)
//for best portability, specify signed or unsigned if there's non-character data in char variables