#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli a,b,c;
        cin>>a>>b>>c;

        if(a+b>c)
        {
            cout<<"TRAIN"<<endl;
        }

        else if(a+b==c)
        {
            cout<<"EQUAL"<<endl;
        }
        else 
        {
            cout<<"PLANEBUS"<<endl;
        }

        
    }
}