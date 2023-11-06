#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, d, m2;
        scanf("%d %d %d", &m1, &m2, &d);

        int w = m1 * d;
        int d1 = w / (m1 + m2);
        int result = d - d1;
        printf("%d\n", result);
    }
    return 0;
}