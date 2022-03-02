// https://www.codechef.com/COOK138D/problems/PREFPERM


#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    lli k,n;
    while(t--)
    {
        cin>>k>>n;

        lli numbers[n];
        for(int i=0;i<n;i++)
        {
            cin>>numbers[i];
        }

        for(int i=1;i<=k;i++)
        {
            cout<<i<<" ";
        }
        printf("\n");
    }

    return 0;
}