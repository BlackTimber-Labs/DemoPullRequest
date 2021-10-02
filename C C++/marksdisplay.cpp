#include <iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void setno (int a){
        rollno=a;
    }
    void printno(void){
        cout<<"roll number is"<<rollno<<endl;

    }
};
class test : virtual public student{
    protected:
    float maths,physics;
    public:
    void setmarks(float m1, float m2){
         maths=m1;
         physics=m2;
    }
    void printmarks(void){
        cout<<"maths marks is"<<maths<<"and"<<"physics marks is"<<physics<<endl;
    }
};
class sports:  virtual public student{
    protected:
    float score;
    public:
    void setsc(float sc){
score=sc;
    }
    void printsc(void){
        cout<<"the score is"<<score<<endl;
    }
};
class result: public test, public sports{
    private:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            printno();
            printmarks();
            printsc();
            cout<<"your total result is"<<total<<endl;
        }
};
    
int main(){
    result nimisha;
    nimisha.setno(4100);
    nimisha.setmarks(98,97);
    nimisha.setsc(10);
    nimisha.display();

return 0;
}
