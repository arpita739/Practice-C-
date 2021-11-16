#include<iostream>
#include<exception>
using namespace std;
int main()
{ /*
    int a=9,b=0,c;
    try
    {
        {if(b==0)
        {
            throw "divide by zero error";
            c=a/b;
            cout<<c<<endl;
        }}
    }
    catch(const char *e)
    {
        
        cout<<"exception handled"<<endl<<e;
    }
    return 0;
    */
   try
   {
       throw runtime_error("abc");
   }
   catch(runtime_error &error)
   {
       cout<<"runtime abc error"<<endl;
       cout<<error.what();
   }

   catch(...)
   {
       cout<< "some error";
   }
   return 0;
}