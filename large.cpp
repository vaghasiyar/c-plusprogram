#include<iostream>
using namespace std;
int main()
{
     int a, b, c;

    cout << "Enter three numbers (a, b, c): ";
    cin >> a >> b >> c;

    if (a > b) {
        cout << a <<" largest number is " ;
    } else if (b > c) {
        cout << b << " largest number is " ;
    } else {
        cout <<c<< " largest number is ";
    }
}