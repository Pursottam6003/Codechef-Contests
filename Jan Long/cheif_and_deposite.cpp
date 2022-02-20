#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n,x; // n FDs and x coins
        cin>>n>>x;

        lli arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        lli sum=0;
        lli count=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=arr[i];
            if(sum<x)
            {
                count++; // that means no of fd shall be broken to get the desired amount;
            }

            if(sum>=x)
            {   
                break;
            }
        }

        if(count==n && sum<x)
        {   //no cases matched so we print 
            cout<<"-1"<<endl;
        }
        

        else if(count==0)
        {   //that means the one fd is enogh to get the coins
            count=1;
            cout<<count<<endl;
        }
        else 
        {   count=count+1;
            cout<<count<<endl;
        }

    }
}