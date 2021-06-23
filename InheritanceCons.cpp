#include<iostream>
#include <string>
using namespace std;

/* Single Inheritance
class Father{
protected:
    int height;
public:
    Father(int h)
    {
        cout<<"constructor of father class is called"<<endl;
        height = h;
    }

};
class Child : Father //inheritance
{
    public:
    Child(int x):Father(x)  // Inheriting the constructor of Father class in Child constructor of child class
    {
        cout<<"child class constructor"<<endl;
    }   
    void display()
{
    cout<<"height is "<<height<<endl;
} 
};

int main()
{
    Child c(24);
    c.display();
    return 0;
}
*/

// Multiple Inheritance
class Father{
protected:
    int height;
public:
    Father()
    {
        cout<<"constructor of father class is called"<<endl;
        
    }

};
class Mother{
protected:
    string skincolor;
public:
    Mother()
    {
        cout<<"constructor of mother class is called"<<endl;
        
    }

};
class Child : public Father,public Mother //inheritance
{
    public:
    Child(int h,string color ):Father(),Mother()  // Inheriting the constructor of Father class in Child constructor of child class
    {
        cout<<"child class constructor"<<endl;
        height=h;
        skincolor=color;
    }   
    void display()
{
    cout<<"height is "<<height<<" and color is "<<skincolor<<endl;
} 
};

int main()
{
    Child c(24,"white");
    c.display();
    return 0;
}