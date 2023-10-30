#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toBinary(int n)
{
    // variable to store the result
    long long bin = 0;

    int rem, i = 1;

    // loop to convert to binary
    while (n != 0)
    {

        // get remainder of n divided by 2
        rem = n % 2;

        // divide n by 2
        n /= 2;

        // multiply remainder by i
        // add the product to bin
        bin += rem * i;

        // multiply i by 10
        i *= 10;
    }

    return bin;
}

int isPalindrome(int n)
{
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

    int binary = toBinary(n);
    int isPal = isPalindrome(binary);

    if (isPal == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}