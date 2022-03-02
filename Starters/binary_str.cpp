//https://www.codechef.com/START27C/problems/BINSTRING

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

        int ans=1;
        for(int i=1;i<n;i++)
        {
            if(str[i] != str[i-1])
            {
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
