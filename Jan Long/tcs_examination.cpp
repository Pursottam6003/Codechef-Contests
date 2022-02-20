#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli dsa1,toc1,dm1,dsa2,toc2,dm2;

        cin>>dsa1>>toc1>>dm1;

        cin>>dsa2>>toc2>>dm2;

        lli sum1=dsa1+dm1+toc1;
        lli sum2= dsa2+dm2+toc2;

        if(sum1==sum2)
        {
            if(dsa1>dsa2)
            {
                cout<<"DRAGON"<<endl;
            }

            else if(dsa2>dsa1)
            {
                cout<<"SLOTH"<<endl;
            }

            else if(toc1>toc2)
            {
                cout<<"DRAGON"<<endl;
            }

            else if(toc2>toc1)
            {
                cout<<"SLOTH"<<endl;
            }

            else 
            {
                cout<<"TIE"<<endl;
            }
        }


        else if(sum1>sum2)
        {
            cout<<"DRAGON"<<endl;
        }

        else 
        {
            cout<<"SLOTH"<<endl;
        }
    }    
}