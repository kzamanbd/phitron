#include <stdio.h>

int main()
{

    int x = 9999;

    for (int i = 0; i < x; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}