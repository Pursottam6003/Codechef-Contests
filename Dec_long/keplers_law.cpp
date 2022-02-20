//https://www.codechef.com/JAN221C/problems/KEPLERSLAW

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        float t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;

        float val=(t1*t1)/(r1*r1*r1);
        float val2=(t2*t2)/(r2*r2*r2);

        if(val ==val2)cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }

    return 0;
}