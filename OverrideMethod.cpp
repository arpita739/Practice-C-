#include<iostream>

using namespace std;

class Person{
    public:
    void introduce()
    {
        cout<<"I am person"<<endl;
    }

};
class Student : public Person{
    public:
    void introduce() //Override the base class
    {
        cout<<"I am person and Student"<<endl;
    }

};
int main()
{
    Student s;
    s.introduce();
    return 0;
}