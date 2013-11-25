/*C Programming Language 1.6: Arrays
Exercise 1-13: 
a program which prints a histogram of the
lengths of words in its input
11/24/2013, Emily Wang*/

/*
when using this script in the terminal with the control-D method,
make sure to type your desired text, press enter (newline), and then control-D
otherwise there might be some weird off-by-one errors because of
the way this program counts whitespace/newlines
*/

#include <stdio.h>

//symbolic constants! 
#define MAXHIST 15 //max length of histogram
#define MAXWORD 11 //max length of a word
#define IN      1  //we're inside a word
#define OUT     0  //we're outside a word

//printing the horizontal histogram
main()
{
    int c, i, nc, state; // character, index, number of characters, in/out of word
    int len; //length of each bar
    int maxvalue; //maximum value for wl[]
    int overflow; //number of overflow words (length > MAXWORD)
    int wl[MAXWORD]; //word length counters

    //initial stuff for some variables and the array!
    state = OUT; 
    nc = 0; 
    overflow = 0; 
    for (i=0; i<MAXWORD; ++i)
        wl[i] = 0;

    //sweeping through the file, filling in the array
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            if (nc >0)
                if (nc < MAXWORD)
                    ++wl[nc];
                else
                    ++overflow;
            nc = 0;
        }
        else if (state == OUT) {
            state = IN;
            nc = 1; //beginning of a new word
        } else
            ++nc; //we're inside a word        
    }

    //what's the max occurrence number? look in the array
    maxvalue = 0;
    for (i = 1; i < MAXWORD; ++i)
        if (wl[i] > maxvalue)
            maxvalue = wl[i];

    //histogram things
    for (i = 1; i < MAXWORD; ++i){
        printf ("length of %d (%d occurrences) : ", i, wl[i]);
        if (wl[i] > 0) {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
        } else
            len = 0;
        while (len > 0) {
            putchar ('*'); //building the histogram row
            --len;
        }
        putchar ('\n');
    }
    
    if (overflow > 0)
        printf ("There are %d words >= %d characters long\n ", overflow, MAXWORD);
}