#include<iostream>
using namespace std;
int main(){
     int a;

    cout << "Enter a: ";
    cin >> a;

    if (a % 5 == 0) {
        cout << a << " is divisible by 5";
    } else {
        cout << a << " is not divisible by 5";
    }

}