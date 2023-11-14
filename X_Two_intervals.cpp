#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if ((a2 > b1 && b2 > b1) || (a2 < a1 && b2 < a1))
    {
        printf("-1");
    }
    else
    {

        cout << max(a1, a2) << " " << min(b1, b2);
    }
    return 0;
}