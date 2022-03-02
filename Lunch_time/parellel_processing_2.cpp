//https://www.codechef.com/LTIME105D/problems/PLPROCESS

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

void find_minimum(lli *arr,lli size)
{
    lli running_sum=0;
    lli total_sum=0;

    //first calculate the total sum 
    for(int i=0;i<size;i++)
    {
        total_sum+=arr[i];
    }
    lli ans=total_sum;
    lli right_sum=0;
  
    for(int j=0;j<size;j++)
    {
        running_sum+=arr[j];

        right_sum=total_sum-running_sum;
  
        ans=min(ans,max(running_sum,right_sum));
    }
    cout<<ans<<endl;
    return ;
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

        find_minimum(arr,n);
    }
    return 0;
}
