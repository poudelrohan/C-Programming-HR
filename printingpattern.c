#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    
    int i,j,k;
    for(i = n;i>=1;i--)
    {
        for(j = n;j>i;j--)
        {
            printf("%d",j);
        }
        for(j = 1;j<=2*i-1;j++)
        {
            printf("%d",i);
            printf("\n");
        }
    }
    
    return 0;
}
