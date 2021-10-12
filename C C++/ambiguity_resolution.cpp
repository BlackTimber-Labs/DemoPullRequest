#include <iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"how are you?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"kaise ho?"<<endl;
    }
};
    class derived : public base1, public base2{
        int a;
        public:
        void greet(){
            base1 :: greet();
        }
    };
    class a{
        public:

        void say(){
            cout<<"hello world"<<endl;
        }
    };
    class b: public a{
        int a;
        // public:
        // void say(){
    
        //     cout<<"hello my beatiful people";
        // }
    };

int main(){ 
    // base1 obj1;
    // base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // derived d;
    // d.greet();
    a A;
    b B;
    A.say();
    B.say();
return 0;
}
