#include<iostream>
#include<string>
using namespace std;

class Human
{
    private:
    string name;
    int age;
    public:
    Human()
    {
        name="noname";
        age=0;
        cout<<"constructor called"<<endl;
    }
    void display()
    {
        cout<<name<<endl<<age<<endl;
    }

};
int main()
{
    Human h1; // called automatically
    h1.display();
    return 0;
}