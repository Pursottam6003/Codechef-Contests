#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n;
        cin>>n;

        if(n%2 ==0)
        {
            lli ans= ((n*((n+1)*(n+1))/2)/2) % (998244353);
            cout<<ans<<endl;

        }

        else 
        {
            lli ans= (n*((n+1)*(n+1))/4) %998244353;
            cout<<ans<<endl;
        }
    }
}