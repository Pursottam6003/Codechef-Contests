#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli distance;
    cin>>distance;

    if(distance %2!=0)
    {
        cout<<"-1";
    }

    else 
    {
        distance=distance/2;
        cout<<0<<" "<<distance<<endl;
        cout<<distance<<" "<<0<<endl;
        cout<<0<<" "<<-distance<<endl;
        cout<<-distance<<" "<<0<<endl;
    }
}