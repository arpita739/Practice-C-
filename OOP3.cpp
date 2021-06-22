#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/* Default Constructor
class Human
{
    private:
    string name;
    int age;
    public:

    Human(string iname="arpita",int iage=25)
    {
        cout<<"default constructor"<<endl;
        name=iname;
        age=iage;
    }
    void display()
    {
        cout<<"Name "<<name<<endl<<"Age "<<age;
    }
};
int main()
{
Human h;
h.display();
return 0;
}
*/

/* Destructor
class Human
{
public:
Human() //Constructor
{
    cout<<"constructor called"<<endl;

}
~Human() //Distructor: which is called when the pointer(object) will be deleted. Destructor cannot return anything or no value inside destructor will be executed.
{
cout<<"Distructor called"<<endl;
}
};

int main()
{
    Human *h= new Human() ;
    delete h;//destroy object or when the object created goes out of scope
    
    return 0;
}
*/

/* Dynamically memory allocating and destructor
class Human
{
private:
    string *name;
    int *age;

public:
    Human(string iname, int iage)
    {
        //Dynamically allocating memory for string and integer by using new
        name=new string;
        age=new int;

        *name=iname;
        *age=iage;
    }
    void display()
    {
        cout<<"hi I am "<<*name<<" and age "<<*age<<" years old"<<endl;
    }
    ~Human()
    {
        delete name;
        delete age;
        cout<<"All memories are released";
    }
};
int main()
{
Human *h=new Human("arpita",25);
h->display();
delete h;
}
*/
/* Use of Static
void display();
void display()
{
    static int counter=0; // when you write atatic keyword the value is stored in heap but if you don't write static it will print 1 only and donot increment.
    cout<<"display function called "<<++counter<<" times"<<endl;
}
int main()
{
    display();
    display();
    display();
    display();
    display();
    return 0;
}
*/
class Human
{
    public:
    static int human_count; // we can call static variable without the need of an object
    
    Human()
    {
        human_count++;
    }

    void HumanTotal()
    {
        cout<<"There are "<<human_count<<" people are in the program"<<endl;
    }
    //Static method
    static void HumanCount()
    {
        cout<<"There are "<<human_count<<" people are in the program"<<endl;
    }
};
int Human::human_count=0;
int main()
{
    // cout<<Human::human_count<<endl;
    Human h;
    Human s;
    Human a;
    Human b;
    // h.HumanTotal();
    // cout<<Human::human_count<<endl;
    // 
    Human::human_count; //I have to call static variable to initiate the static method
    Human::HumanCount();
    
    return 0;
}