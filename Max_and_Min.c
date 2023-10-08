#include <stdio.h>

int main(){

    int a, b,c, max, min;
    scanf("%d%d%d", &a,&b,&c);

    // max
    if(a>b && a>c){
        max = a;
    } else {
        if(b>c){
            max = b;
        } else {
            max = c;
        }
    }

    // min
    if(a<b && a<c){
        min = a;
    } else {
        if(b<c){
            min = b;
        } else {
            min = c;
        }
    }

    printf("%d %d", min, max);

    return 0;
}