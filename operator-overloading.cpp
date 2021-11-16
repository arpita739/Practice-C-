#include<iostream>
using namespace std;


class marks
{
    int inmarks;
    int exmarks;
    public:
    marks()
    {
        inmarks=0;
        exmarks=0;
    }
    marks(int im,int ex)
    {
        inmarks=im;
        exmarks=ex;
    }
    void display()
    {
        cout<<inmarks<<endl<<exmarks<<endl;
    }
    marks operator+(marks m)
    {
        marks temp;
        temp.inmarks=inmarks + m.inmarks;
        temp.exmarks=exmarks + m.exmarks;
    }
    marks operator-(marks m);

};
marks marks :: operator-(marks m)
{
    marks temp;
    temp.inmarks=inmarks - m.inmarks;
    temp.exmarks=exmarks - m.exmarks;
} 
int main()
{
    marks m1(10,20),m2(20,30);
    marks m3=m1+m2;
    m3.display();
    marks m4= m1 - m2;
    m4.display();
    return 0;
}

//It allows us to provide an intuitive interface to our class users, plus makes it possible for templates to work equally well with classes and built-in types. Operator overloading allows C++ operators to have user-defined meanings on user-defined types or classes.