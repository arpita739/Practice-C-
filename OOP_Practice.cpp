#include <iostream>
#include <string>
using namespace std;
//OBJECT ORIENTED PROGRAMMING PRACTICE SESSION
class HumanBeing
{
public:
    string name;
    void introduce()
    {
        cout<<"Hi I am "<<name<<endl;
    }
    void display()
    {
        cout << "hello we are fucking humans";
    }
};
class Human
{
    public:
    string name;
    void introduce()
    {
        cout<<"hi "<<name<<endl;
    }
    void HumanName(); //method
};
// :: we can declair method of a class outside the class using scope-resolution operator
void Human :: HumanName() //declaration of the method HumanName outside the class with scope esolution operator
{
    cout<< Human::name<<endl;
}
int main()
{
    HumanBeing h1; //OBJECT WILL BE CREATED IN THE STACK
    // h1.display();
    /* Creating different objects of a class
    h1.name="anil";
    h1.introduce();

    HumanBeing h2;
    h2.name="anjali";
    h2.introduce();
    */
   /*CREATE A DYNAMIC OBJECT OF A CLASS
   Human *bunty = new Human{}; //OBJECT WILL BE CREATED IN THE HEAP
    bunty->name="bunty";
    bunty->introduce();
   */
    Human h3;
    h3.name="arpita";
    h3.HumanName();

    return 0;
}
