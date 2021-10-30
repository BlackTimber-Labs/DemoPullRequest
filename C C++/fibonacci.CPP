#include <iostream.h>
#include <conio.h>
void main ()
{
  int n , i;
  long f,s,t;
  clrscr();
  cout<<"enter number of elements in fibonacci series";
  cin>>n;
  f=0;
  s=1;
  for (i=1; i<=n; i++)
  {
    cout <<f<<"\t";
    t=f+s;
    f=s;
    s=t;
  }
  getch();
 }
