//C Programming Language 1.3, The for statement
//Mostly running through the examples and tweaking it for the learning experience!
//11/23/2013, Emily Wang

#include <stdio.h>

/* printing the Fahrenheit-Celsius table in reverse order, with less variables and a for loop!*/
main ()
{
    int fahr;

    printf("Fahr Celsius\n"); //column titles

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) 
        printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
}