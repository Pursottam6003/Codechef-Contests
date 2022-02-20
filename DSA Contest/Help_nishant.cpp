#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;
        int counter=1;
        /*
        while(true)
        {
            if(k==3)
            {
                counter=0;
                break;
            }
            else 
            {
                if((k-3*counter==0) || (k-3*counter==1) || (k-3*counter==2))
                {
                    break;
                }
                else 
                {
                    counter++;
                }
            }
            
        }

        // for(int count=1;(k-3*count==0 || k-3*count==1 || k-3*count==2);count++)
        // {

        // }
        int ans=2*counter+4;
        // int result= (ans*(ans+1))/2 +1;
        cout<<ans<<endl;

        */

       if(k==3)
       {
           cout<<"4"<<endl;
       }
       if(k>3)
       {
           while(true)
           {
               if(k-3*counter <=1)
               {
                   break;
               }
               counter++;
           }

           int ans= counter+1;
           cout<<2*ans<<endl;
       }
    }
}