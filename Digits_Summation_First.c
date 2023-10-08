#include <stdio.h>

int main(){

    int m, n;
    scanf("%d %d", &m, &n);

    while(m >= 10){
        m /= 10;
    }
    while (n >=10)
    {
        n/=10;
    }
    printf("%d", (m + n));
    return 0;
}