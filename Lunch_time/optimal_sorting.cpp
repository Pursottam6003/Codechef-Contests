//https://www.codechef.com/LTIME103C/problems/OPTSORT

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool issorted(lli *arr,lli n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n;
        cin>>n;
        
        lli arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(issorted(arr,n))
        {
            cout<<"0"<<endl;
        }

        else 
        {

            int max=INT_MIN;
            int min=INT_MAX;

            for(int i=0;i<n;i++)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }    
            }
//347
            for(int i=0;i<n;i++)
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                }    
            }

            cout<<max-min<<endl;
        }
        
    }
}