#include<iostream>
using namespace std;
int main()
{
    float rate, qty, amt, billamt, gst, netbill, dis;

    cout << "enter value rate: ";
    cin >> rate;

    cout << "enter value qty: ";
    cin >> qty;

    amt = rate * qty;

    dis = (amt * 5) / 100;

    billamt = amt - dis;

    gst = (billamt * 18) / 100;

    netbill = billamt + gst;

    cout <<1 << "rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill";
    cout <<1 << rate << "\t" << qty << "\t" << amt << "\t" << dis << "\t" << billamt << "\t" << gst << "\t" << netbill;

}

