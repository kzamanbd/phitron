#include <iostream>
using namespace std;

int main()
{

    char s;
    cin >> s;

    if (s >= '0' && s <= '9')
    {
        cout << "IS DIGIT";
    }
    else
    {
        cout << "ALPHA" << endl;
        if (s >= 'A' && s <= 'Z')
        {
            cout << "IS CAPITAL";
        }
        else
        {
            cout << "IS SMALL";
        }
    }
    return 0;
}