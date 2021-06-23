#include<iostream>

using namespace std;
/*
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
*/

// How to access the base class overridden method in dertived class
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
        Person ::introduce(); //base class method accessing
    }

};
int main()
{
    Student s;
    s.introduce();
    s.Person :: introduce(); //access the base class overridden method in dertived class using scope resolution
    return 0;
}