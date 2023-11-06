#include <stdio.h>
#include <string.h>

int main()
{
    char a[999], b[999];
    scanf("%s\n %s", &a, &b);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s %s", a, b);

    return 0;
}