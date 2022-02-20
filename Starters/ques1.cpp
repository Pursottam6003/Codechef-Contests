#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    lli bana,apple;
    
    while(t--)
    {
        cin>>bana>>apple;

        lli min1 = bana/2;
        lli min2= apple/1;

        lli ans=min(min1,min2);
        cout<<ans<<endl;
    }
}