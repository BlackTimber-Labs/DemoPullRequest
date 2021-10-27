// #include<iostream>
// using namespace std;
// #define n 100
// class stack{
//     int* arr;
//     int top;

//     public:
//     stack(){
//         arr=new int[n];
//         top=-1
//     }
//     void push(int x){
//         if(top == n-1){
//             cout<<"stack overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void popp(){
//         if(top ==-1){
//             cout<<"no ele to pop"<<endl;
//             return -1;
//         }
//         top--;
//     }
//     int top(){
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };
// int main(){

//     stack sr;
//     sr.push(1);
//     sr.push(1);
//     sr.push(1);
//     sr.push(1);
//     cout<<sr.popp()<<endl;
//     sr.top();
//     cout<<sr.popp()<<endl;
//     sr.top();
//     sr.top();
//     sr.top();
//     cout<<sr.empty<<endl;
//     return 0;

// }
#include <iostream>
using namespace std;
#define MAX_SIZE 101 

class Stack
{
private:
    int A[MAX_SIZE];  // array to store the stack
	int top;   // variable to mark the top index of stack. 
public:
	// constructor
	Stack()
	{
		top = -1; // for empty array, set top = -1
	}

	// Push operation to insert an element on top of stack. 
	void Push(int x) 
	{
	  if(top == MAX_SIZE -1) { // overflow case. 
			cout<<"Error: stack overflow ";
			return;
		}
        top+=1;
		A[top] = x;
	}
 
	// Pop operation to remove an element from top of stack.
	void Pop() 
	{
		int item;
		if(top == -1) { // If stack is empty, pop should throw error. 
			cout<<"Error: No element to pop";
			return;
		}
		item = A[top];
		top--;
	}
 
	// Top operation to return element at top of stack. 
	int Top() 
	{
		return A[top];
	}
 
	// This function will return 1 (true) if stack is empty, 0 (false) otherwise
	int IsEmpty()
	{
		if(top == -1) return 1;
		return 0;
	}

	// ONLY FOR TESTING - NOT A VALID OPERATION WITH STACK 
	// This function is just to test the implementation of stack. 
	// This will print all the elements in the stack at any stage. 
	void Print() {
		int i;
		cout<<"stack: ";
		for(i = 0;i<=top;i++)
			cout<<A[i]<<" ";
		cout<<endl;
	}
};

int main()
{
    // Code to test the implementation. 
    // calling Print() after each push or pop to see the state of stack. 
	Stack S;
	S.Push(2);S.Print();
	S.Push(5);S.Print();
	S.Push(10);S.Print();
	S.Pop();S.Print();
	S.Push(12);S.Print();
}