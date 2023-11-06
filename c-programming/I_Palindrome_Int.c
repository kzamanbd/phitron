#include <stdio.h>

int main()
{

    int n, reverse = 0, reminder;
    scanf("%d", &n);

    int copyNum = n;
    while (copyNum != 0)
    {
        reminder = copyNum % 10;
        reverse = reverse * 10 + reminder;
        copyNum /= 10;
        // printf("%d %d %d\n", reminder, reverse, copyNum);
    }

    if (n == reverse)
    {
        printf("%d\nYES", reverse);
    }
    else
    {
        printf("%d\nNO", reverse);
    }

    return 0;
}