#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n value: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}

/* output if n=3
*
**
***
**
*

*/
