#include <bits/stdc++.h>
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

        string str;
        cin>>str;

        int one=0;
        int zero=0;

        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                zero++;
            }

            else if(str[i]=='1')
            {
                one++;
            }
        }

        int ans=min(zero,one);
        if(ans>=1)
        {
            cout<<ans-1<<endl;
        }

        else 
        {
            cout<<ans<<endl;
        }
    }
}