#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, target;
    int arr[20];
    cout << "Enter the array number " << endl;
    cin >> n;
    cout << "Enter the array" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target ";
    cin >> target;
    cout<<" The positions are"<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            x = arr[i];
            if ((target - x) == arr[j])
                cout<<"[" << i<<","<< j<<"]" ;
        }
        
    }
    return 0;
}