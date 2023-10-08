#include <stdio.h>

int main(){

    long long int m, n;
    scanf("%lld %lld", &m, &n);

    m = m%10;
    n = n%10;
    
    printf("%lld", (m + n));
    return 0;
}