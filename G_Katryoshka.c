// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
// m = eyes, n = mouths, k = bodies

#include <stdio.h>

int main()
{
    long long int eyes, mouths, bodies, min, count = 0;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    // minimum number
    min = eyes < mouths && eyes < bodies ? eyes : mouths < bodies ? mouths
                                                                  : bodies;
    eyes = eyes - min;
    mouths = mouths - min;
    bodies = bodies - min;
    count = min;

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