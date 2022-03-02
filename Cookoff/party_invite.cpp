
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    lli pa,pb,pc;
    while(t--)
    {
        cin>>pa>>pb>>pc;

        if(pa+pc>=pb)
        {
            cout<<pa+pc<<endl;
        }

        else 
        {
            cout<<pb<<endl;
        }

    }

    return 0;
}