#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);

        int T = 0, P = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'T')
            {
                T++;
            }
            if (str[j] == 'P')
            {
                P++;
            }
        }
        if (T == P)
        {
            printf("Draw");
        }
        else
        {
            if (T > P)
            {
                printf("Tiger");
            }
            else
            {
                printf("Pathaan");
            }
        }
        printf("\n");
    }
    return 0;
}