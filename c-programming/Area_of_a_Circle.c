#include <stdio.h>
#define PI 3.141592653

int main(){

    float a, result = 0.0;
    
    scanf("%f", &a);
    result = PI * a * a;
    printf("%.9f", result);
    
    return 0;
}