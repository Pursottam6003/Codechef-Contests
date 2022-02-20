//https://www.codechef.com/START26D/problems/TRAVELFAST
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli t,c,b;
    cin>>t;
    while(t--)
    {
        cin>>b>>c;
        if(c>b)
            cout<<"BIKE"<<endl;
        else if(b>c)
            cout<<"CAR"<<endl;
        else 
            cout<<"SAME"<<endl;
    }
    return 0;

}