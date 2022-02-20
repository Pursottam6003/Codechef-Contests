//https://www.codechef.com/EXUN21C/problems/SUMPARITY

#include <bits/stdc++.h>
using namespace std;
typedef size_t lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n;
        cin>>n;

        lli AndOper;
        cin>>AndOper;
         

        if(AndOper %2 !=0)
        {
            if(n%2==0)
            {
                cout<<"EVEN"<<endl;
            }

            else if(n%2 !=0)
            {
                cout<<"ODD"<<endl;
            }
        }

        else 
        {   
            if(n==1)
            {
                cout<<"EVEN"<<endl;
            }

            else 
            {
                cout<<"Impossible"<<endl;
            }
        }
    }
}