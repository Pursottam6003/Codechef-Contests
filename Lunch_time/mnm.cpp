//https://www.codechef.com/LTIME102C/problems/MINPIZZAS

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
/* this was giving time limit exceeded
lli hcf(lli n,lli k)
{
    if(n==0)
    {
        return k;
    }

    if(k==0)
    {
        return n;
    }

    if(n==k)
    {
        return n;
    }
    if(n>k)
    {
        return hcf(n-k,k);
    }

    else 
    {
        return hcf(n,k-n);
    }
}
*/

lli hcf(lli n, lli k)
{
    if(k==0)
    {
        return n;
    }

    return(k,n%k);
}
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        int ct=1;
        lli n,k;
        cin>>n>>k;

        lli ans= (n*k)/(hcf(n,k));

        cout<<ans/(k)<<endl;
       
    }
}