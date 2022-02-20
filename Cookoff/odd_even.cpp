#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        int a,b,sum;

        cin>>a>>b;
        sum=a+b;

        if(sum %2 ==0)
        {
            cout<<"Bob"<<endl;
        }        
        else 
        {
            cout<<"Alice"<<endl;
        }
    }
}