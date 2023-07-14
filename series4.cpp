#include <iostream>
using namespace std;
int main()
{
    int i, n, c = 1;

    cout << "enter a value: ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        cout << c * i;
        c *= 2;
    }
}