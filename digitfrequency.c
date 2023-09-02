#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char strarr[1000];
    scanf("%c",strarr);
    int zero= 0;int one= 0;int two= 0;int three= 0;int four= 0;int five= 0;int six= 0;int seven= 0;int eight= 0;int nine = 0;
    for(int i = 0; strarr[i] != '\0';i++)
    {
        printf("%c",strarr[i]);
        if(strarr[i] =='0'){
              zero += 1; 
        }else if(strarr[i] =='1'){
             one += 1;
        }else if(strarr[i] =='2'){
             two += 1;
        }else if(strarr[i] =='3'){
             three += 1;
        }else if(strarr[i] =='4'){
             four += 1;
        }else if(strarr[i] =='5'){
             five += 1;
        }else if(strarr[i] =='6'){
             six += 1;
        }else if(strarr[i] =='7'){
             seven += 1;
        }else if(strarr[i] =='8'){
             eight += 1;
        }else if(strarr[i] =='9'){
             nine += 1;
        }
    
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}
