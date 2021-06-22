#include <iostream>
#include <string>
using namespace std;
/* RECTANGLE
int main()
{
    int row,col;
    cout<<"enter number of rows ";
    cin>>row;
    cout<<"enter number of columns ";
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*HOLLOW RECTANGLE
int main()
{
    int row,col;
    cout<<"enter number of rows ";
    cin>>row;
    cout<<"enter number of columns ";
    cin>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";
            }
            else 
            {
                cout<< " ";
            }
        }
        cout<<endl;
    }

    return 0;
}
*/
/* INVERTED HALF PYRAMID
int main()
{
    int n;
    cout << "Enter the size of pyramid ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++) // depends on how many rows
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
*/
/* RIGHT-ANGLE TRIANGLE
int main()
{
    int n;
    cout<<"Enter size ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
            cout<<endl;
    }
    return 0;
}
*/
/*180 DEGREE HALF TRIANGLE
int main()
{
    int n;
    cout<<"Enter size ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}*/
/*Number-Right angle Triangle
int main()
{
    int n;
    cout<<"Enter size ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}*/
/*FLOYD'S NUMBER
int main()
{
    int n,k=1;
    cout<<"Enter size ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
            
        }
        cout<<endl;
    }
    return 0;
}*/
//ADVANCED PROBLEMS
/*Butterfly Pattern
int main()
{
    int n;
    cout<<"Enter size ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space= 2*n - 2*i; //Space calculates
        for (int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

        }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for (int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

        }
    return 0;
}*/
/*Inverted Number
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++) //j=n+1-row no.
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
    return 0;
}*/
/* 0-1 Pattern
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            cout<<"1 ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}*/
/* Rhombus Pattern
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;

    }


    return 0;
}*/
/*Number Pattern
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}*/
/*Pallendromic Pattern(difficult)
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }

    return 0;
}*/