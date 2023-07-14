#include <iostream>
using namespace std;
int main()
{
    float i, j = 0.5;
    int n;

    cout << "Enter a value: ";
    cin >> n;

    cout << i << " i ";

    for (i = 0; i < n; i++)
    {
        j = j + i;
        cout << j << " j ";
    }

    return 0;
}


