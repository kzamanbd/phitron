#include <iostream>
using namespace std;

int main()
{

    float n;
    cin >> n;

    if (n < 0)
    {
        cout << "Out of Intervals";
    }
    else
    {
        float min = n - 25;
        int first = min, last = n;
        cout << "Interval ";
        if (min == (int)min)
        {
            first = 25;
            cout << "[";
        }
        else
        {
            cout << "(";
        }

        cout << first << "," << last << "]";
    }

    return 0;
}