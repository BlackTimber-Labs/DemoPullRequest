#include <bits/stdc++.h>
using namespace std;


void menu(){

cout<<"*******MENU*******"<<endl;
cout<<" 1. CHECK YOUR BALANCE "<<endl;
cout<<" 2. DEPOSIT "<<endl;
cout<<" 3. WITHDRAW "<<endl;
cout<<" 4. EXIT "<<endl;
cout<<"******************"<<endl;



}


int main(){


    int opt;
    double balance =500 ;



do{
 menu();

 cout<<" ENTER AN OPTION ";

 cin>>opt;


 switch(opt){

case 1 : cout<< "YOUR CURRENT BALLANCE IS "<<balance<<" Rs. "<<endl;
break;

case 2 : double deposit;
cout<<" ENTER THE AMOUNT YOU WANT TO DEPOSIT "<<endl;
cin>>deposit;
balance = balance + deposit ;
break;


case 3 : double withdraw;
cout<<" ENTER THE AMOUNT YOU WANT TO WITHDRAW "<<endl;
cin>>withdraw;
if(withdraw<=balance){
balance = balance - withdraw ;
}
else{
    " NOT SUFFICIENT BALANCE ";
}
break;

 }

} while(opt!=4);



system("pause>0");


}