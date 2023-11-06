#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);

    for (int i = 2; i <= x; i++)
    {
        int flag = 0;
        

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag != 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}