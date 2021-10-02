//Binary Search program

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int l=0,u=n-1,mid=0,flag=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	cout<<"Enter element to be searched."<<"\n";
	int x;
	cin>>x;
	sort(a,a+n);
	while(l<=u)
	{
	    mid=(l+u)/2;
	    if(a[mid]<x)
	    l=mid+1;
	    else if(a[mid]>x)
	    u=mid-1;
	    else
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	{
	    cout<<"The element is found";
	}
	else
	cout<<"Not found";
	return 0;
}
