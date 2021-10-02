#include <bits/stdc++.h>
using namespace std;
//Comparison of strings and palindroms
//One with the smaller length comes first in the dictionary
//If the strings match while comparing they are termed as palindromes
//Can also be done using the inbuilt function strcmp in the header file string
int main()
{
    string s1, s2;
    cout << "Enter the first string\n";
    getline(cin, s1);
    cout << "Enter the first string\n";
    getline(cin, s2);
    for (int i = 0, j = 0; s1[i] != '\0' && s2 != '\0'; i++)
    {
        //If the charecters don't match the execution of the loop terminates
        if (s1[i] != s2[j])
        {
            break;
        }
        //if the lengths/corresponding elements are equal then the strings are equal
        else if (s1[i] == s2[j])
        {
            cout << "Equal\n";
        }
        //if the corresponding member of the string is a alphabet placed at a higher position alphabetically it comes at a relatively early position in the dictionary
        else if (s1[i] < s2[j])
        {
            cout << "Smaller\n";
        }
        //Same logic as that of the above comment
        else if (s1[i] > s2[j])
        {
            cout<<"Greater"
        }
        
    }
    return 0;
}
