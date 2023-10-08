#include <stdio.h>

int main(){

    char x;
    scanf("%c", &x);
    if(x >= 'a' && x<= 'z'){
        int result = x - 32;
        printf("%c", result);
    } else {
        int result = x + 32;
        printf("%c", result);
    }
    return 0;
}