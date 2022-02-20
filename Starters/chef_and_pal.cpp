//https://www.codechef.com/START20C/problems/ANTIPAL

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
        cin>>n;

        if(n%2 == 0)
        {
            string str;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    str.append("1");
                }

                else 
                {
                    str.append("0");
                }
            }

            cout<<str<<endl;
        }

        else 
        {
            cout<<"-1"<<endl;
        }
    }
}