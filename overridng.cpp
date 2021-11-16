//Run time polymorphism: Method overriding
#include<iostream>
using namespace std;
class A
{
    public:
    void abc()
    {
        cout<<"hi"<<endl;
    }
};
class B : public A
{
    public:
    void abc()
    {
        cout<<"hallo"<<endl;
    }
};
int main()
{
    A a1;
    a1.abc();
    B b1;
    b1.abc();

    return 0;
}