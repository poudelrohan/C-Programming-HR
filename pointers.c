#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int diff= *a - *b;
    int sum = *a + *b;
    *a = sum;
    *b = diff;
    if(*b<0)
    {
        *b *= -1;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}