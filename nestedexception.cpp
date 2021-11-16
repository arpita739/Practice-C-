#include<iostream>
#include<exception>
using namespace std;
int main()
{
    try{
    try
{
    throw "a charecter";
}
        catch(const char *e)
        {
            cout<<"charecter type error inner";
            cout<<"rethrow the error";
            throw runtime_error("run");
        }
    }
    catch(const char *e)
    {
        cout<<"charecter type error outer";
    }
    catch(...)
    {
        cout<<"unexpected man!";
    }
    return 0;
}