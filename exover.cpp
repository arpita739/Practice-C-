#include<iostream>
using namespace std;
class A
{
    int n;
    public:
    A(int m)
    {
      n=m;  
    }
    void display()
    {
        cout<<n<<endl;
    }
    void operator+(A &a);

};
void A :: operator+(A &a)
{
    int b = n + a.n;
    void display();
    cout<<b;
}
int main()
{
    A a1(56);
    A a2(23);
    a1 + a2;
    
    return 0;
}