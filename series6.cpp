#include <iostream>
using namespace std;
int main()
{
    int i, n, tf = 1, ts = 1, m;

    cout << "enter a value: ";
    cin >> n;

    cout << tf << "tf " << ts << "ts ";

    for (i = 1; i <= n; i++)
    {
        m = tf + ts;
        cout << m << "m ";
        tf = ts;
        ts = m;
    }
}