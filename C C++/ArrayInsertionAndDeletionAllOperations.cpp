#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10];
	int size=0, value, position, del_pos;

	cout<<"Enter array size (Max 10) : ";
	cin>>size;
	
	if(size<=10){
		cout<<"\nEnter elements : ";
		for(int i=0; i<size; i++)
		cin>>arr[i];
	}
	
	else{
		cout<<"Not enough size";
		return 0;
	}
	int choise;
	
	do
	{
		
	cout<<"\n1. Insert at first position\n2. Insert at any position\n3. Delete first element from array\n4. Delete from a position\n5. Display\n6. Location of last element\n7. Exit\n\n";
	cin>>choise;
		
	switch(choise)
	{
	case 1:
		cout<<"\nEnter element : ";
		cin>>value;
		size++;
		
		for (int i = size; i >= 1; i--)
		arr[i] = arr[i - 1];

		arr[1 - 1] = value;

		cout<<"New array : ";
		for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	    cout << "\n\n";
	
		break;
	
	case 2:	
	
		cout<<"\nEnter value which you want to insert : ";
		cin>>value;
	
		cout<<"Enter position : ";
		cin>>position;

	    size++;

		for (int i = size; i >= position; i--)
		arr[i] = arr[i - 1];

		arr[position - 1] = value;

		cout<<"New array : ";
		for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	    cout << "\n\n";
	
		break;
		
	case 3:
		
		if(size==0){
			cout<<"\nNothing in array";
			return 0;
		}
		
		cout<<"\nOld array :";
		for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	    cout << endl;
	    
		del_pos=1;
		
		if(del_pos<1 || del_pos>size)  
        {
        cout<<"\nInvalid\n\n";
        }
        else{
		
        for(int i=del_pos-1; i<size-1; i++)
        {
            arr[i]=arr[i+1];
        }
        
		size=size-1;
    
    	cout<<"New array : ";
		for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
		cout<<"\n";
		}
	    break;
	
	case 4:
		
		if(size==0){
			cout<<"\nNothing in array";
			return 0;
		}
		
		cout<<"\nArray :";
		for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	    cout << endl;
	    
		cout<<"Enter position : ";
		cin>>del_pos;
		
		if(del_pos<1 || del_pos>size)  
        {
        cout<<"\nInvalid\n\n";
        }
        else{
		
        for(int i=del_pos-1; i<size-1; i++)
        {
            arr[i]=arr[i+1];
        }
        
		size=size-1;
    	
    	cout<<"New array : ";
		for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	    cout << endl;
		}
	    break;
	    
	case 5:
		
		cout<<"\nDisplaying\n";
		for(int i=0; i<size; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		break;
		
	case 6:
		
		if(size==0){
			cout<<"\nNothing in array";
		}
		
		int i;
		for(i=0; i<size; i++);
		cout<<"\nPosition of last element is : "<<i;
		cout<<"\nIndex of last element is : "<<i-1;
		cout<<endl;
		break;
		
	}
	
	} while(choise!=7);

	return 0;
}
