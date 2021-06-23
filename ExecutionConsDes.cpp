#include<iostream>
using namespace std;
class Person{
    public:
    Person(){
        cout<<"constructor of person class called"<<endl;
    }
    ~ Person(){
        cout<<"destructor of person class called"<<endl;
    }
};
class Student : public Person{
    public:
    Student(){
        cout<<"constructor of student class called"<<endl;
    }
    ~ Student(){
        cout<<"destructor of student class called"<<endl;
    }
};
int main(){
    Student s;
    
    return 0;}