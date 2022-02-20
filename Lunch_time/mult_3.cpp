#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    
    while(t--)
    {
        lli k,d0,d1;
        cin>>k>>d0>>d1;
        lli sum=d0+d1;
        vector<int> v1;
        v1.push_back(d0);
        v1.push_back(d1);

        for(lli i=2;i<k;i++)
        {
            if(sum<10)
            {
                v1.push_back(sum);
            }

            else 
            {
                v1.push_back(sum %10);
            }
            sum+=v1[i];
        }
        
        if((d0+d1) %3 ==0 || v1[k-1] %3==0)
        {
            cout<<"YES"<<endl;
        }

        else 
        {
            cout<<"NO"<<endl;
        }
    }    
}