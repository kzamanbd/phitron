#include <stdio.h>

int main(){

    
    long long int n, result = 0;
    scanf("%lld", &n);

    result = (n * (n+1)) / 2;

    printf("%lld", result);

    return 0;
}