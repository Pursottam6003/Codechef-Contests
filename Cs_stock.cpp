#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli s,a,b,c;

        cin>>s>>a>>b>>c;
        float calc= s+(s*c)/100.0;


        if(calc >=a && calc <=b)
        {
            cout<<"YES"<<endl;
        }

        else 
        {
            cout<<"NO"<<endl;
        }

    }
}