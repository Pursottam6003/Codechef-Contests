//https://www.codechef.com/LTIME105D/problems/NIBBLE


#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli bits_num;
        cin>>bits_num;

        lli ans1=(bits_num)/4;
        double ans2=(bits_num)/4.0;


        if(ans2-ans1==0)
            cout<<"Good"<<endl;
        
        else 
            cout<<"Not Good"<<endl;
 
        
    }
    return 0;
}