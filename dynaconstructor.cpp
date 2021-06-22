#include<iostream>
using namespace std;

class A
{
public:
int a,b;
int *p;
A() //constructor(obj1)
{
a=0;
b=0;
p= new int;
}
A(int x,int y,int z) //arguement constructor(obj2)
{
    this->a=x;
    this->b=y;
    this->p=new int; 
    *p=z;
}

};

int main()
{
    A obj1,obj2(5,6,7); 
    //OBJECT WILL BE CREATED IN THE STACK
    //obj1 calls A() and obj2 calls A(int x, int y)
    // object is only useful when it will have some value and represent a class...Now constructor automatically initialize values to object when it is made. That is when ever you make a constructor and giving values inside it, after making object, the values automatically transfer to objects.
    
    // Now this constructor can allocate dynamically created memory to object thus the object uses memory given by the constructor

    //MYTH: CONSTRUCTOR CREATE MEMORY FOR OBJECT
    //FIRST OBJECT CREATE->CONSTRUCTOR->MEMORY ALLOCATE FOR OBJECT(Normal)
    // Now for Dynamic constructor the member(example pointer)of object creates/allocates memory dynamically for storing a value. This time it is called as Dynamic Constructor.
    cout<<obj1.a<<endl;
    cout<<obj1.b<<endl;
    cout<<obj1.p<<endl;
    cout<<obj2.a<<endl;
    cout<<obj2.b<<endl;
    cout<<obj2.p<<endl;

   

}