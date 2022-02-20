#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    lli a1,a2,b1,b2,c1,c2;
    while(t--)
    {
        //getting user input

        cin>>a1>>a2;

        cin>>b1>>b2;

        cin>>c1>>c2;

        lli a=a1+a2;
        lli b=b1+b2;
        lli c=c1+c2;

        lli ans= max(a,max(b,c));
        cout<<ans<<endl;
    }

    return 0;
}