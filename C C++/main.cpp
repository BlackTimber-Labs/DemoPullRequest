#include <iostream>
using namespace std;
class number{
    int number1;
    int number2;
public:
    number(){}
    number(int num1 , int num2,int temp);
    void show();
};
number::number (int num1 ,int num2,int temp)
{
    number1=num1;
    number2=num2;
    temp=num1;
    num1=num2;
    num2=temp;
};
void number::show(){
    cout<<"the number after swaping are a is "<<number1<<" and b is "<<number2;
}

int main(){
    number n1,n2;
    int num1;
    int num2;
    cout<<"Enter the value of a and b"<<endl;
    cin>>num1>>num2;
    n1=number(num1,num2);
    n1.show();
    
    return 0;
    
}
