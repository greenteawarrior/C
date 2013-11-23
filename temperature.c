//C Programming Language 1.2, Variables and Arithmetic Expressions
//Mostly running through the examples and tweaking it for the learning experience!
//11/22/2013, Emily Wang

#include <stdio.h>

// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

main()
{
    //declare variables for temperature values and some logic
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; //lowest desired value for this table
    upper = 300; //upper desired value for this table
    step = 20; //step size for temp values

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9; //we're using integers so we can't just multiply by 5/9 (beware truncation)
        printf("%3d \t %6d \n", fahr, celsius); /*printing first thing in a field 
                                                3 digits wide, and the second thing 
                                                in a field 6 digits wide 
                                                --> prettier output*/
        fahr = fahr + step;
    }
}