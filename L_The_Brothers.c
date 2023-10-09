#include <stdio.h>
#include <string.h>

int main()
{

    char first[255], second[255], third[255], forth[255];
    scanf("%s %s\n%s %s", &first, &second, &third, &forth);

    if (strcmp(second, forth) == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}