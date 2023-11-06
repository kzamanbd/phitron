#include <stdio.h>

int main()
{

    float f;
    scanf("%f", &f);
    int num1 = f;
    float num2 = f - num1;
    if (num2 != 0)
    {
        printf("float %d %.3f", num1, num2);
    }
    else
    {
        printf("int %d", num1);
    }
    return 0;
}