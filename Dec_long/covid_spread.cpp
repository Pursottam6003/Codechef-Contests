//https://www.codechef.com/JAN221C/problems/COVSPRD
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
       lli n,d;
       cin>>n>>d;
       lli count=0;
       lli people=1;
       if(d==0)
       {
           cout<<people<<endl;
       }

       else  
       {
           for(lli i=0;i<d;i++)
           {
               if(count <10)
               {
                   people=people*2;
                   count++;
               }

               else if(count>=10)
               {
                   people=people*3;

                   if(people > n)
                   {
                       break;
                   }
               }
           }

            lli ans= min(people,n);
            cout<<ans<<endl;
       }

    }

    return 0;
}