// Given two numbers a and b. You have to answer with "YES" if there is a non-empty interval consisting of numbers from l to r (l,l+1,l+2,..., r) with a odd numbers and b even numbers, or "NO" otherwise.

#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    if (a <= b && (a != 0 && b != 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}