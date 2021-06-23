#include <string>
#include<iostream>
using namespace std;
class Father{
    public:
    int height;
    void askFather()
    {
        cout<<"I am father ask what you want"<<endl;
    }

};
class Mother{
    public:
    string skincolor;
    void askMother()
    {
        cout<<"I am mother ask what you want"<<endl;
    }

};
class Child : public Father, public Mother // MULTIPLE INHERITANCE
{
    public:
    void asParents()
    {
        cout<<"asking parents"<<endl;
    }
    void SetColorandHeight(string icolor,int iheight)
    {
        skincolor=icolor;
        height=iheight;
    }
    void display()
    {
        cout<<"height is "<<height<<" skin color is "<<skincolor<<endl;

    }

};

int main()
{
    Child c;
    c.SetColorandHeight("white",5);
    c.display();
    c.askFather();
    c.askMother();

    return 0;
}