#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    int floorVal = 0, cellVal = 0, roundVal = 0;
    float value = 0.0;

    scanf("%d %d", &a, &b);

    value = a*1.0/b;

    floorVal = floor(value);
    cellVal = ceil(value);
    roundVal = round(value);

    printf("floor %d / %d = %d\n", a, b, floorVal);
    printf("ceil %d / %d = %d\n", a, b, cellVal);
    printf("round %d / %d = %d\n", a, b, roundVal);
    
    return 0;
}