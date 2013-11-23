/*C Programming Language 1.4, The for statement
Mostly running through the examples and tweaking it for the learning experience!
11/23/2013, Emily Wang*/

/* printing the Fahrenheit-Celsius table in reverse order, 
with symbolic constants and a for loop!*/


#include <stdio.h>

/*
define symbolic constants.
no need for semicolon at the end of the line
conventionally written in upper case so they're easily distinguished from lowercase variable names
*/
#define LOWER 0     //lower limit of table
#define UPPER 300   //upper limit
#define STEP  20    //step size

//print the Fahrenheit-Celsius table
main ()
{
    int fahr;

    printf("Fahr Celsius\n"); //column titles

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) 
        printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
}