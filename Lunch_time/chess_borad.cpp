//https://www.codechef.com/LTIME105D/problems/CHESSDIST

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;    

        lli max1=abs(x1-x2);
        lli max2=abs(y2-y1);

        lli ans=max(max1,max2);
        cout<<ans<<endl;
    }
    return 0;
}