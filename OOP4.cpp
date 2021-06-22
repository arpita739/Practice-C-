#include<iostream>
#include <string>
using namespace std;
/* Friend function
class Human
{
    //default private:
    string name;
    int age;
    public:
    Human(string iname,int iage)
    {
        name = iname;
        age = iage;
    }
    void tellme()
    {
        cout<<name<<endl<<age<<endl;
    }
    friend void display(Human man); //display function can access all the properties of the class human
};

void display(Human man)
{
    cout<<man.name<<endl<<man.age<<endl;
}
int main()
{
    Human h("Arpita",24);
    display(h);

return 0;
}
*/
/*Inheritence
class Person
{
    public:
    string name;
    int age;
    void setName(string iname)
    {
        name=iname;
    }
    void setAge(int iage)
    {
        age=iage;
    }
    
};
class Student : public Person
{
    public:
    int id;
    void setId(int iod)
    {
        id=iod;
    }
    void Introduce()
    {
        cout<<"Hi I am "<< name<<" and I am "<<age<<" years old"<<endl;
        cout<<"My Id is "<<id<<endl;
    }


};
int main()
{
    Student s;
    s.setName("arpita");
    s.setAge(24);
    s.setId(12345);
    s.Introduce();

    return 0;
}
*/
class Arpita
{
public:
 string name;
 long long int number;
 void setName(string iname)
 {
     name=iname;
 } 
 void setNumber(long long int inumber)
 {
     number=inumber;
 }
};
class Rajat : public Arpita
{
    public:
    int score=3000;
    void display()
    {
        cout<<"Her name is "<<name<<" and number is "<<number<<" and I love her "<<score<<endl;
    }
};
int main()
{
    Rajat r;
    r.setName("Arpita");
    r.setNumber(8240833198);
    r.display();
    return 0;
}