#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    lli n,x;
    
    while(t--)
    {
        cin>>n>>x;
        lli ans= x%n;
        if(x<n)
        {
            cout<<ans<<endl;
        }

        else 
        {
            cout<<x%(n+1)<<endl;
        }
      
    }
}