#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int arraySum(vector<int> &v){
   int initial_sum = 0;
   return accumulate(v.begin(), v.end(), initial_sum);
}
int main(){
   vector<int> v{12, 56, 76, 2, 90 , 3} ;
   int sum = 0;
   sum=accumulate(v.begin(), v.end(), sum);
   cout<<"The sum of array is "<<sum;
   return 0;
}
