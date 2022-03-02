//https://www.codechef.com/START27C/problems/PRODUCT

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int hcf(int a,int b)
{
    if(a==0)
    {
        return b;
    }

    else if(b==0)
    {
        return a;
    }

    else if(a==b)
    {
        return a;
    }
    else if(a>b)
    {
        return hcf(a-b,b);
    }

    else 
    {
        return hcf(a,b-a);
    }
}
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli b,c;
        cin>>b>>c;

        lli hcf_ans= hcf(b,c);
        lli a= c/hcf_ans;
        cout<<a<<endl;
    }
    return 0;
}
