//https://www.codechef.com/EXUN21C/problems/CIRCLEGAME

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int  main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli m,x;//
        cin>>m>>x;

        lli previous=1;
        //because for n=1 answer is 1
        cout<<previous<<" ";
        for(int i=2;i<x;i++)
        {
            int res= m%x;
            if(res ==0)
            {
                res=x;
            }

            if(res<=previous)
            {
                previous++;
            }
            cout<<previous<<endl;
        }
        cout<< "\n";
    }
    return 0;
}