#include <stdio.h>
#include <string.h>

int main()
{

    char a[10], b[10];
    scanf("%s\n%s", &a, &b);

    int length1 = strlen(a);
    int length2 = strlen(b);
    printf("%d %d\n", length1, length2);
    printf("%s%s\n", a, b);

    char first = a[0];
    char last = b[0];
    a[0] = last;
    b[0] = first;
    printf("%s %s", a, b);
    return 0;
}