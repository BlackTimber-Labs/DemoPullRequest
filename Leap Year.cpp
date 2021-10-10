#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

   //declare variable
   int year;

   //take user input for year
   cout<<"Enter year : ";
   cin>>year;

   if(year%4==0 || year%400==0 || year%100==0)
   cout<<"This is a leap year"<<endl;

   else
   cout<<"This is not a leap year"<<endl;

   return 0;
}