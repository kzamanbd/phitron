#include <iostream>
using namespace std;

int *get_array()
{
    int *arr = new int[5]{5, 95, 85, 94, 24};

    return arr;
}

int main()
{
    int *arr = get_array();

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
