#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli n,idx;
    cin>>n>>idx;

    lli bill[n];
    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }

    lli charged;
    cin>>charged;

    lli sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==idx)
        {
            continue;
        }
        else 
        {
            sum+=bill[i];
        }
    }

    lli average=(sum)/2; //splited into two parts 
 
    if(average==charged)
    {
        cout<<"Bon Appetit"<<endl;
    }

    else 
    {
        cout<<abs(average-charged)<<endl;
    }

}