//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;


void firstHalf(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < (n-1); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < (2*i+1); j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

void secondHalf(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < ((2*n)-(2*i+1)); k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    firstHalf(n);
    secondHalf(n);

    return 0;
}