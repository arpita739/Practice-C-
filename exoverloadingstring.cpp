#include<iostream>
using namespace std;

class A
{
    string x;
    public:
    A(string i)
    {
        x=i;
    }
    void operator+(A &a);
    void display()
    {
        cout<<x;
    }
};
void A :: operator+(A &a)
{
    string m = x + a.x;
    cout<<m<<endl;
}
int main()
{
    A a1("hi ");
    A a2("hello");
    a1+a2;
    return 0;
}