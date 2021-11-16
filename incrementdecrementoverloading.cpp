#include<iostream>
using namespace std;
class Marks
{
    public:
    int mark;
    Marks()
    {
        mark=0;
    }
    Marks(int m)
    {
        mark=m;
    }
    void display()
    {
        cout<<"your mark is "<<mark<<endl;
    }
    void operator++()
    {
        mark +=1;
    }
    friend void operator--(Marks &m);

};
void operator--(Marks &m)
{
    m.mark -= 1;
}
int main()
{
    Marks m1(23);
    m1.display();
    ++m1;
    m1.display();
    --m1;
    m1.display();
    return 0;
}