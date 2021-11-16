#include<iostream>
using namespace std;

class marks{
    public:
    int internalmarks;
    int externalmarks;
    marks()
    {
        internalmarks=0;
        externalmarks=0;
    }
    marks(int in,int em)
    {
        internalmarks=in;
        externalmarks=em;
    }
    void display()
    {
        cout<<"internal marks "<<internalmarks<<endl<<"external marks "<<externalmarks<<endl;
    }

    marks operator+(marks m)
    {
        marks temp;
        temp.internalmarks =internalmarks + m.internalmarks;
        temp.externalmarks= externalmarks + m.externalmarks;
        return temp;
    }

};
int main()
{
    marks m1(10,20),m2(30,40);
    marks m3= m1+m2;
    m3.display();
    return 0;

}