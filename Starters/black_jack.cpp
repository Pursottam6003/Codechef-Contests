//https://www.codechef.com/START27C/problems/
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli x,y;
        cin>>x>>y;

        lli num=21-(x+y);

        if(num <=10)
        {
            cout<<num<<endl;
        }
        else 
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
