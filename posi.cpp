#include<iostream>
using namespace std;
int main(){
    int a;

    cout << "Enter value a: ";
    cin >> a;

    if (a > 0) {
        cout << a << " is positive";
    } else if (a < 0) {
        cout << a << " is negative";
    }
}