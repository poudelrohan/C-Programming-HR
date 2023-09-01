#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    int n = (b - a) + 1;
    char day[9][6]={"one","two","three","four","five","six","seven","eight","nine"};
  	// Complete the code.
      
      
    for(int i = 0;i<n;i++)
    {
        if((a+i)>=1 && (a+i)<=9)
        {
            printf("%s\n",day[a+i-1]);
        }
        if((a+i) > 9 && (a+i) % 2 == 0)
        {
            printf("even\n");
        }
        if((a+i) > 9 && (a+i) % 2 != 0)
        {
            printf("odd\n");
        }
    }

    return 0;
}

