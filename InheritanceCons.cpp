#include<iostream>
using namespace std;
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
}
void display()
{
    cout<<"height is "<<height<<endl;
}
int main()
{
    return 0;
}