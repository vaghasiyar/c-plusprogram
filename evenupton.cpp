#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter value n: ";
    cin >> n;
    
    for (i = 2; i <= n; i += 2)
    {
        cout << i << " i ";
    }
}