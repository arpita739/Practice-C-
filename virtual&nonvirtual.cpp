#include<iostream>
using namespace std;
class add
{
    public:
    int a=10,b=10;
    void print()
    {
        cout<<"base class is "<<a+b;
    }

};
class sub : public add
{
    public:
    int x=80,y=30;
    void print()
    {
        cout<<"derived class is"<<x-y;
    }

};
int main()
{
    add *a1;
    sub s1;
    a1= &s1;
    a1 ->print();
    return 0;
}