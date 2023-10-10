// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
// m = eyes, n = mouths, k = bodies

#include <stdio.h>

long long int min(long long int a, long long int b, long long int c)
{
    long long int min;
    if (a < b && a < c)
    {
        min = a;
    }
    else
    {
        if (b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }

    return min;
}

int main()
{
    long long int eyes, mouths, bodies, minNum, count = 0;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    minNum = min(eyes, mouths, bodies);

    eyes = eyes - minNum;
    mouths = mouths - minNum;
    bodies = bodies - minNum;
    count = minNum;

    long long int halfEyes = eyes / 2;

    if (halfEyes < bodies)
    {
        count += halfEyes;
    }

    else if (halfEyes > bodies)
    {
        count += bodies;
    }

    printf("%lld", count);

    return 0;
}