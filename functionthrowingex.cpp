#include<iostream>
#include<stdexcept>
using namespace std;
void test() throw (int,char,runtime_error)
{
throw ();
int main()
{
    try
    {
     test();
    }
    catch(int e)
    {
        cout<<"Integer type"<<e<<endl;
    }
    catch (char c)
    {
        cout<<"char type"<<c<<endl;
    }
    catch (runtime_error r)
    {
        cout<<"run time error"<<r.what()<<endl;
    }
    return 0;
}