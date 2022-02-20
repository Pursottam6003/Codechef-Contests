#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool check_prime(string str,lli i,lli j)
{
 
    lli num=0;
    int counter=0;
    for(lli k=j;k>=i;k--)
    {   
        lli m= str[k];
        num=num+(pow(2.0,counter)*m);
        counter++;
    }
    cout<<num<<endl;

    for(lli i=2;i<sqrt(num);i++)
    {
        if(num %i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;
        bool isprime=false;
        for(lli i=0;i<str.size();i++)
        {
            for(lli j=str.size();j>i;j--)
            {
                if(check_prime(str,i,j))
                {
                    isprime=true;
                }
            }
        }

        if(isprime)
        {
            cout<<"YES"<<endl;
        }

        else 
        {
            cout<<"NO"<<endl;
        }
    }
}