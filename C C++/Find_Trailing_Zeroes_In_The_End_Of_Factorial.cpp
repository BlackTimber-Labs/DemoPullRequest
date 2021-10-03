#include <iostream>
using namespace std;
int main(){
	
	int n,fact=1;
	cout<<"Enter a number: ";
	cin>>n;
	
	for(int i=1;i<n+1;i++){
		fact*=i;
	}
	int rem = 0,count = 0;
	while(rem==0){
		if(fact%10==0){
			count++;
			rem=0;
			fact/=10;
		}
		else{
			rem=1;
			cout<<endl<<"Factorial of "<<n<<" has "<<count<<" trailing zeroes at the end.";
		}
		
	}
}
