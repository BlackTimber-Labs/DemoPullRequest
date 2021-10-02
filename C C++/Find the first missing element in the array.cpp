#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int low, high;
    cout << "Enter the first natural number present in the array\n";
    cin >> low;
    cout << "Enter the last natural number present in the array\n";
    cin >> high;
    int a[n];
    cout << "Enter the elements of the array\n";
    //Time complexity: O(N)
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int diff = low - 0;
    //If the consecutive elements are present in any array the difference between the elements of the array and the coresponding index remains constant throughout
    for (int i = 0; i < n; i++)
    {
        if (a[i] - i != diff)
        {
            cout << "Missing number=" << i + diff << endl;
            //If there is only one missing element in the array it can be terminated once the element is found in the array
            break;
        }
    }
}
