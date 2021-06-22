#include <iostream>
#include <string>
using namespace std;
class Human
{

private:
    int age;
    // to display private properties use public methods
    int getAge()
    {
        return age-5;
    }
public:
    void displayAge()
    {
        cout << getAge() << endl;
    }
    void setAge(int value)
    {
        age = value;
    }
};
int main()
{
    Human h1;
    h1.setAge(24);
    h1.displayAge();
}