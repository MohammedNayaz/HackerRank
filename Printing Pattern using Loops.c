//Printing Pattern using Loops


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,min;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    
    int size = n*2 - 1;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            min = (i < j) ? i : j;
            min = (min < size-i) ? min : size-i-1;
            min = (min < size-j-1) ? min : size-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
