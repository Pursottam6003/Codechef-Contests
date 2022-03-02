//https://www.codechef.com/COOK138D/problems/HOLIDAYS

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    lli n,w;
    while(t--)
    {
        cin>>n>>w;

        lli days[n];
        for(int i=0;i<n;i++)
        {
            cin>>days[i];
        }

        sort(days,days+n);
        lli ct=0;
        lli sum=0;
        for(int i=n-1;i>=0;i--)
        {
            if(sum>=w)
            {
                break;
            }
            sum+=days[i];
            ct++;
        }

        cout<<n-ct<<endl;
    }

    return 0;
}