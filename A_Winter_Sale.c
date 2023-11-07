#include <stdio.h>

int main()
{

    int discount = 25, price = 150;
    scanf("%d %d", &discount, &price);
    printf("%0.2f", price / (((100 - discount) * 1.0) / 100));
    return 0;
}