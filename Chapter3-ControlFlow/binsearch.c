/*
C Programming Language 3.3:
Else-If
Exercise 3-1
11/29/2013, Emily Wang
*/

//binsearch! aka bisection method for finite sorted arrays
//deciding if a particular value x occurs in the sorted array (ascending order) v

#include <stdio.h>

//declaring stuff
int x = 4; //desired thing to find
int n = 5; //number of items in array v[]
int v[5] = {2, 4, 6, 8, 10}; //sorted array to search
int y; //stores the answer
int binsearch(int x, int v[], int n); //le function

main()
{
    y = binsearch(x, v, n);
    printf ("%x\n", y);
}

//binsearch : find x in v[0] <= v[1] <= ... < v[n-1]
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n-1;

    //is x less than, greater than, or equal to the middle element?
    while (low <= high) { 
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else //found it!
            return mid;
    }
    
    return -1; //no match
}