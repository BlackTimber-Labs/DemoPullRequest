#include<iostream>
#include<string>
using namespace std;
void delay(int t = 100000000)
{
    int k;
    for (int i = 0; i < t; i++)
    {
        k = i;
    }
}

int main()
{
    long double n;
    char t[40];
    char z[30];
    string str;
    cout << "Made by_Avi Aryan !\n";
    cout << "**********\n\n\n";
    cout << "\n HELLO ! HOW MAY I HELP YOU$\n";
    delay();
    cout << "WHAT IS YOUR NAME.\n";
    getline(cin, str);
    cout << "HOW ARE YOU " << str;
    cout << "\n";
    cin.get(t, 40);
    cout << "I AM  ALSO FINE.";
    cout << "\nWHAT IS YOUR PHONE NUMBER: ";
    cin >> n;
    cout << "WHAT IS YOUR ID:";
    cin >> z;
    cout << "\n THANK YOU ! ";
    return 0;
}