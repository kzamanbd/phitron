#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000];
    scanf("%s", &str);

    int length = strlen(str);

    int i = 0;
    int j = length - 1;
    int isPalindrome = 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
        }

        i++;
        j--;
    }

    if (isPalindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}