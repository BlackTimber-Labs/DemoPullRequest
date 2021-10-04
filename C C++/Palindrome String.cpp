
#include <bits/stdc++.h>
using namespace std;
//finding if the string is a palindrome
int main()
{
    string s, s1;
    int c;
    cout << "Enter the string\n";
    getline(cin, s);
    //property of the concatenation of the strings has been used
    //Reversing a string
    for (int i = s.length(); i >= 0; --i)
    {
        s1 += s[i];
    }
    for (int i = 0, j = s.length(); i <= s.length(), j > 0; i++, j--)
    {
        c = 0;
        if (s[i] != s1[j])
        {
            cout << "Not a palindrome\n";
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "palindrome\n";
    }
    return 0;
}
