#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    lli n;
    
    while(t--)
    {
        cin>>n;
        lli a,b;
        set<int> s1;
        set <int > s2;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            s1.insert(a);
            s2.insert(b);
        }

        lli ans=s1.size()+s2.size();

        cout<<ans<<endl;
    }
}