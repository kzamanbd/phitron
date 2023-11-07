#include <stdio.h>

int main(){

    long long a, b, c, d;

    scanf("%lld %lld %lld %lld",  &a, &b, &c, &d);

    printf("Difference = %lld", ((a*b) - (c*d)));
    return 0;

}