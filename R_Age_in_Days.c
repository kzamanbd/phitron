#include <stdio.h>

int main()
{

    int n, year, month, days;
    scanf("%d", &n);

    year = n / 365;

    int monthDay = n % 365;

    month = monthDay / 30;

    days = monthDay % 30;

    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days\n", days);

    return 0;
}