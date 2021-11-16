#include<iostream>
using namespace std;
class Human
{
    string name;
    int age;
    public:
    Human(string iname, int iage)
    {
        name=iname;
        age=iage;
    }
    void tellme()
    {
        cout<<name<<endl<<age<<endl;
    }
// When friend function is used? 
// when we want to access the members of a class which are private outside of that class. We use friend function

friend void display(Human man); //declaration
// and to make a class as friend use
// friend class nameofclass;

};
void display(Human man)
{
    cout<<man.name<<endl<<man.age<<endl;
}
int main()
{
    Human h("arpita",23);
    display(h);
    return 0;
}