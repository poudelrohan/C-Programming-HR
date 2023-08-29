#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int maxx = a;
    if(maxx > b){
        maxx = a;
    }else{
        maxx = b;
    }
    
    if(maxx > c){
        maxx = maxx;
    }else{
        maxx = c;
    }
    
    if(maxx > d){
        maxx = maxx;
    }else{
        maxx = d;
    }

    return maxx;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}