/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Base
{

    private:
        int num,num1;
    public:
        void get_data();
        int get_value();
        int get_value1();
};
class Derived:public Base
{
    public:
        int num2;
        void multiply();
        void result();
};
void Base::get_data()
{
    num=50;
    num1=60;
};
int Base::get_value()
{
    return num;
};
int Base::get_value1()
{
    return num1;
};
void Derived::multiply()
{
    num2=get_value()*get_value1();
};
void Derived::result()
{
    cout<<"Number 1 : "<<get_value()<<endl;
    cout<<"Number 2 : "<<get_value1()<<endl;
    cout<<"Result : "<<get_value()<<"*"<<get_value1()<<" = "<<num2;
};
int main()
{
   Derived obj;
   obj.get_data();
   obj.multiply();
   obj.result();

    return 0;
}
