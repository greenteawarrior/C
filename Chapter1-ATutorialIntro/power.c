/*C Programming Language 1.7: Functions
11/25/2013, Emily Wang*/

/*learning about functions: writing our own function for computing 
the power of a number (small-scale computation). 
...in reality you should use pow(x,y) from the standard library*/

//comment overload. in reality you should not have this many comments...

#include <stdio.h>

//declaration: function prototype
int power(int m, int n); //this says that power is a function that expects two int arguments and returns an int
//parameter names are optional; but good variable names are always good

//test power function ; print some computations
main ()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf ("%d %d %d\n", i, power(2,i), power(-3,i)); //this calls the power function twice
    return 0; //return value of 0 implies normal termination
    //other return values are indicators of unusual or erroneous termination
    //from now on the main functions will have return values. (all previous scripts in ch1 had abstracted them out)
}

//power function: raise base to the n-th power; n >= 0
int power(int base, int n) //declaring parameter types and names, and the type of result the function returns
{
    int i, p; //local variables! they don't interfere with the i in main()

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}


// format for a function definition:
// return-type function-name(parameter declarations, if any)
// {
//     declarations
//     statements
// }


// it's ok for function definitions to appear in any order
// they can be in one source file or several
// no particular function definition should be split between files


// terminology:
// parameter = variable named in the parens list of a function
// formal argument
// actual argument


//the ANSI C prototype format is different, however you 
//should use the newer style (as shown in this script) b/c 
//it's easier for the compiler