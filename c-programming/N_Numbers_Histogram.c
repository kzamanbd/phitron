#include <stdio.h>

int main()
{

    char s;
    int n;
    scanf("%c\n%d", &s, &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int h;
        scanf("%d", &h);

        for (int j = 0; j < h; j++)
        {
            if (s == '+')
            {
                printf("+");
            }
            else if (s == '-')
            {
                printf("-");
            }
            else if (s == '*')
            {
                printf("*");
            }
            else
            {
                printf("/");
            }
        }
        printf("\n");
    }

    return 0;
}