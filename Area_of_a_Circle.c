#include <stdio.h>
#define PI 3.141592653

int main(){
    
    double a, result = 0.0;
    
    scanf("%lf", &a);
    result = PI * a * a;
    printf("%.9lf", result);
    
    return 0;
}