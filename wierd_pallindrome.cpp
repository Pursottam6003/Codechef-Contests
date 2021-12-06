//https://www.codechef.com/NOV21C/problems/MAKEPAL
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;


    while(t--)
    {
        int ct_od=0;
        lli n;
        cin>>n;
        lli arr[n];

        for(lli i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i] %2 !=0)
            {
                ct_od++;
            }
        }

        cout<<(ct_od)/2<<endl;

    }



}
