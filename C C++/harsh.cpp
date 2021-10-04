#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
int length=0, breadth=0;
printf("Enter length and breadth\n");
cin>>length>>breadth;
int perimeter=2*(length+breadth);
int area =length*breadth;
printf("area = %d\nperimeter = %d\n",area,perimeter);

return 0;
}