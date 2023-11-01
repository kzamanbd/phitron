#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toBinary(int n)
{
    long long bin = 0;
    int rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int palindrome(int x)
{
    int n = toBinary(x);
    int reverse = 0, reminder, copyNum = n;

    while (copyNum != 0)
    {
        reminder = copyNum % 10;
        reverse = reverse * 10 + reminder;
        copyNum /= 10;
    }
    return reverse == n ? 1 : 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = palindrome(n);

    if (result == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}