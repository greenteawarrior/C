/*C Programming Language 1.5.4: Word Counting
11/23/2013, Emily Wang*/

#include <stdio.h>

#define IN  1 //inside a word
#define OUT 0 //outside a word

//count lines, words, and characters in input
main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) { // the || operator means OR
        ++=nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c = '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc)
}

/*
|| means OR
&& means AND, w/ higher precendence than ||
the || and && expressions are evaluated left to right, and will stop when truth or falsehood is known
*/

/*
1-11 Some good test cases to uncover bugs:
no input
no words, just newlines
no words, just blanks, tabs, and newlines
one word per line, no blanks and tabs
word starting at the beginning of the line
word starting after some blanks
*/