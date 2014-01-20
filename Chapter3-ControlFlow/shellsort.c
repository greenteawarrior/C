/*
C Programming Language 3.5:
Loops - While and For
11/29/2013, Emily Wang
*/

#include <stdio.h>
#include <ctype.h>

//declaring stuff
int v[5]= {3,1,6,9,11};
int n = 5;
int i;
void shellsort(int v[], int n);

main()
{
    printf("input n=5, v[5]={ 3, 1, 6, 9, 11 }\nshellsort(v, n) will rearrange v into increasing order\nresult is v[5]={ ");
    shellsort(v, n);
    for (i=0; i<n; i++){
        if (i == n-1)
            printf("%i", v[i]);
        else
           printf("%i, ", v[i]);
   }
    printf(" }\n");
}

/*shellsort: sort v[0]...v[n-1] into increasing order*/
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap){
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}