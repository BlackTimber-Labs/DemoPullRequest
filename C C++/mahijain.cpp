//printing N numbers in reverse order using recursion
#include <iostream>
using namespace std;
void print_Nto1(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    print_Nto1(n-1);
}
int main()
{
    int a=100;
    print_Nto1(a);
    return 0;
}