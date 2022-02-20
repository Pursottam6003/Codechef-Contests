#include<bits/stdc++.h>
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

        lli arr[n];
        for(lli i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        lli a=arr[n-1];
        lli b=arr[n-2];
        lli c=arr[0];

        lli ans= (a-c)*b;

        cout<<ans<<endl;
    }
}