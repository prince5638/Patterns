// space + stra's ( strats + spaces )
// ----*----           1        4
// ---***---           3        3
// --*****--           5        2
// -*******-           7        1
// *********           9        0

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

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
    
    return 0;
}