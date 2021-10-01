#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0)
    return a;
    if (a==0)
    return b;
    if(a==b)
    return a;
    else if(b>a)
    return gcd(a, b-a);
    else
    return gcd(a-b,b);
}
long long lcm_naive(int a, int b) {

  return (long long) a * b/gcd(a,b);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << lcm_naive(a, b) <<endl;
  return 0;
}
