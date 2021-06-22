#include <iostream> //Preprocessing command
#include <string>
using namespace std; //std::cout<<"Hello Universe"
class Employee
{ // access modifiers:public,protected and private
public:
    string name;
    int eid;
    int salary;

    Employee(string n, int e, int s,int sp)
    {
        this->name = n;
        this->eid = e;
        this->salary = s;
        this->secretPassword=sp;
    }
    //method(use "this->") to call an object from method
    void printDetails()
    {
        cout << "the employee id " << this->eid << " name " << this->name << " is " << this->salary << " dollars " << endl;
    }


    void getSecretPassword()
    {
        cout<<"the secret password of employee is "<<this->secretPassword<<endl;
    }
    //have to declair private below otherwise all will be under private and not be accessable
    private:
    int secretPassword;
};
//Inheritence
class Programmer : public Employee
{
    public:
    string errors="none";
};
int main()
{
    /*cout<<"Hello Universe";*/
    //camelCase Notation
    /* int marksInMaths=83;
    cout<<marksInMaths;*/

    // int age;
    // cout << "enter the age ";
    // cin >> age;
    // // SWITCH STATEMENT
    // switch (age)
    // {
    // case 12:
    //     cout << "u are 12";
    //     break;
    // case 18:
    //     cout << "you are 18";
    //     break;
    // default:
    //     cout << "fuck off";
    //     break;
    // }
    /* IF STATEMENT
if(age>150 || age<1)
{
    cout<<"invalid";
}
else if(age>=18)
{
    cout<<"blah";
}
else 
{
    cout<<"blah blah";
}
*/

    //MATRIX
    // int value[2][3]={{2,3,4},{7,8,9}};
    // for (int i = 0; i <2 ; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value in "<<i<<","<<j<<" is "<<value[i][j]<<endl;
    //     }

    // }
    //TypeCasting
    // int a=5;
    // cout<<(float)a/6;
    // string name ="harry";
    // cout<<"his name is "<<name<<endl;
    // cout<<"his name is "<<name.length()<<endl; //to know the length of the string
    // cout<<"his name is "<<name.substr(0,3)<<endl; //substring

    /* CONCEPT OF POINTER: which store address
int a=25, *ptr;
ptr=&a;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of *ptr "<<*ptr<<endl;
cout<<"the address of a "<<&a<<endl;
cout <<"the address of a "<<ptr<<endl;
*/
    //CLASSES AND OBJECTS

    //Employee emp;
    // emp.name="harry";
    // emp.eid=1;
    // emp.salary=100;
    // cout<<"the employee id "<<emp.eid<<" name "<<emp.name<<" is "<<emp.salary<<" dollars ";
    Employee emp("Harry constructor", 1, 100,3322255); //calling from constructor
    emp.getSecretPassword();
    emp.printDetails();
    


    return 0;
}