#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    

    while(t--)
    {
        lli n;
        lli k;
        cin>>n;
        cin>>k;

        string s;
        cin>>s;

        lli count=0;
        lli no_of_slps=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                count++;
                if(count>=k)
                {
                    no_of_slps=no_of_slps+(count)/k;
                    count=0;
                }
            }

            else if(s[i]=='1')
            {
                if(count>=k || count==k)
                {
                    
                    no_of_slps=no_of_slps+(count)/k;
                    count=0;
                }

                else 
                {
                    count=0;
                }
            }
        }
        
        cout<<no_of_slps<<endl;
        
        
    }
}