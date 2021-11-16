#include<iostream>
using namespace std;

class Marks
{
    int subject[3];
    public:
    Marks(int s1,int s2, int s3)
    {
        subject[0]=s1;
        subject[1]=s2;
        subject[2]=s3;
    }
    int operator[](int position)
    {
        return subject[position];
    }

};
int main()
{
    Marks m(22,23,24);
    cout << m[0]<<endl;
    cout << m[1]<<endl;
    cout << m[2]<<endl;
    return 0;
}