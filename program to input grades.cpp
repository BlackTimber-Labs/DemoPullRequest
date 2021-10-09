
#include<iostream>
using namespace std;
int main()
{
    char grade;
    cout << "enter your grade:";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << " Excellent";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Passed";
        break;
    case 'D':
        cout << "Failed";
        break;
    default:
        cout << "Invalid input";
    }
    return 0;
}

