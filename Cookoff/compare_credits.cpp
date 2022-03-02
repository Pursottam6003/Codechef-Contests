//https://www.codechef.com/COOK138D/problems/CREDITS

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    lli semester;
    while(t--)
    {
        cin>>semester;
        
      

        if(semester>65)
        {
            cout<<"Overload"<<endl;
        }

        else if(semester <35)
        {
            cout<<"Underload"<<endl;
        }

        else  
        {
            cout<<"Normal"<<endl;
        }
    }

    return 0;
}