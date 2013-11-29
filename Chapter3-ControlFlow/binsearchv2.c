/*
C Programming Language 3.3:
Else-If
Exercise 3-1
11/29/2013, Emily Wang
*/

//binsearch! aka bisection method for finite sorted arrays
//deciding if a particular value x occurs in the sorted array (ascending order) v
//version 2: uses less tests within the loop 

#include <stdio.h>

//declaring stuff
int x = 4; //desired thing to find
int n = 5; //number of items in array v[]
int v[5] = {2, 4, 6, 8, 10}; //sorted array to search
int y; //stores the answer
int binsearchv2(int x, int v[], int n); //le function

main()
{
    y = binsearchv2(x, v, n);
    printf ("%x\n", y);
}

//binsearchv2 : find x in v[0] <= v[1] <= ... < v[n-1]
int binsearchv2(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (low+high) / 2; 

    //is x less than, greater than, or equal to the middle element?
    while (low <= high && x != v[mid]) { 
        if (x < v[mid])
            high = mid - 1;
        else 
            low = mid + 1;
        mid = (low+high) / 2;
    }
    if (x == v[mid])
        return mid; //found it!
    else
        return -1; //no match
}

/*
Compared to binsearch.c, the second version does more tests outside
of the while loop. Instead of if, if-else, else it's just if, else.
Because this is a simple program, the second version isn't noticeably
better than the first version in terms of speed.
It's slightly less readable, actually. 
Perhaps explore optimization with more complex programs later?? 
*/