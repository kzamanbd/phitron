#include <stdio.h>
#include <string.h>

int count = 0;

void recursion(char str[], int length, int i)
{
    if (i == length - 1)
    {
        return;
    }
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    else
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    recursion(str, length, i + 1);
}

int main()
{

    char str[200];
    fgets(str, 200, stdin);
    int length = strlen(str);
    recursion(str, length, 0);
    printf("%d", count);
    return 0;
}