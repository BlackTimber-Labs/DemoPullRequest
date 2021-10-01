#include <iostream>
using namespace std;
int euclid_gcd(int a, int b)
{
    if (a < b)
    {
        return euclid_gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return euclid_gcd(b, a % b);
}
int main()
{
    int a, b, c;
    cout << "For the standard Diophatione Equation:- ax+by=c\n";
    cout << "Enter the value of a\n";
    cin >> a;
    cout << "Enter the value of b\n";
    cin >> b;
    cout << "Enter the value of c\n";
    cin >> c;
    int hcf = euclid_gcd(a, b);
    if (c % hcf == 0)
    {
        cout << "Integral solution exists\n";
    }
    else
    {
        cout << "No solution exists" << endl;
    }
    return 0;
}
