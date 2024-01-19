#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d, e;

        void setData(int a,int b,int c); 
        void getData(){
            cout<<"Value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
            cout<<"Value of c: "<<c<<endl;
            cout<<"Value of d: "<<d<<endl;
            cout<<"Value of e: "<<e<<endl;
        }
};

void Employee :: setData(int a1,int b1,int c1)  // ::->Scope resolution operator
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee emp1;
    // emp1.a= 132; This will throw error as a is private //Here we cannot access data of a directly
    emp1.d=22;
    emp1.e=21;

    emp1.setData(1,2,3);
    emp1.getData();

    return 0;

}