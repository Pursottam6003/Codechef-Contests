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
        lli k;
        cin>>n;
        cin>>k;

        string s;
        cin>>s;

        lli count=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}