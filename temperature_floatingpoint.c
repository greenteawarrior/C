//C Programming Language 1.2, Variables and Arithmetic Expressions
//Mostly running through the examples and tweaking it for the learning experience!
//11/22/2013, Emily Wang

#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
floating point version!*/

main()
{
    //declare variables for temperature values and some logic
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //lowest desired value for this table
    upper = 300; //upper desired value for this table
    step = 20; //step size for temp values

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0); //we're using integers so we can't just multiply by 5/9 (beware truncation)
        /*if the arithmetic involves any floating point things, then the other things will be converted to floats 
        and the answer will be floating point as well*/
        printf("%3.0f \t %6.1f \n", fahr, celsius);
        //print first thing at least 3 characters wide w/ no decimal points and no fraction digits
        //print second thing at least 6 characters wide w/ 1 digit after the decimal point
        fahr = fahr + step;
    }
}