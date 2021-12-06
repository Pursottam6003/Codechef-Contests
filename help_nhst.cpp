#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,flag=0;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;
        int s=1;
        long long int e=10000;
        int m=(s+e)/2;
        int ans=0;
        while(s<=e )
        {
            if((m*(m+1))/2+1<=k)
            {   
                ans=m+1;
                s=m+1;
            }
            else 
            {
                e=m-1;
            }
        } 
        cout<<2*ans<<endl;
    }
}