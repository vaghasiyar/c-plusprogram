#include <iostream>
using namespace std;
int main()
{
    int i, n, c = 1;

    cout << "Enter a value: ";
    cin >> n;

    for (i = 1; c < n; i++)
    {
        cout << c;
        c *= 2;
    }

}