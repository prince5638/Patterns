// * * * * *
// * * * *
// * * * 
// * *
// * 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    
    return 0;
}