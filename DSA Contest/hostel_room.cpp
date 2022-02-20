//https://www.codechef.com/START26D/problems/HOSTELROOM

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;

        lli arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        lli final_sum=0,running_sum=x;
        for(int i=0;i<n;i++)
        {
            running_sum+=arr[i];
            if(running_sum>final_sum)
            {
                final_sum=running_sum;
            }
        }
        cout<<final_sum<<endl;
    }
    return 0;
}