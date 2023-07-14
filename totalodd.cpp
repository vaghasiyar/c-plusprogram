#include<iostream>
using namespace std;
int main()
{
    int i, total = 0;
    for (i = 1; i <= 5; i+=2)
    {
        total = total + i;
        cout << i;
    }
    cout << total <<"total is ";
}