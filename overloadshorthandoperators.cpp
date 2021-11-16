#include<iostream>
using namespace std;
//we are going to use += and -= operator
class marks
{
    int mark;
    public:
    marks()
    {
        mark=0;
    }

    marks(int m)
    {
        mark=m;
    }
    void markplease()
    {
        cout<<"your mark is "<<mark<<endl;
    }
    //if operator do not return any value
    void operator+=(int bonusmarks)
    {
        mark = mark + bonusmarks;
    }
    friend void operator -=(marks &object, int remark);
};
void operator -=(marks &object, int remark)
{
    object.mark -=remark;

}
int main()
{
    marks m(25);
    m.markplease();
    m +=20;
    m.markplease();
    m -=20;
    m.markplease();
    return 0;
}