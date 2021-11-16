#include<iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};
int main()
{
    Distance *ptr, p;
    ptr=&p;

    cout<<"enter feet";
    cin>>(*ptr).feet;
    cout<<"enter inch";
    cin>>p.inch;

    cout<<"display both"<<endl<<(*ptr).feet<<endl<<(*ptr).inch<<endl;

    return 0;
}