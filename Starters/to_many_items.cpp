//https://www.codechef.com/START27C/problems/POLYBAGS

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli no_of_items;
        cin>>no_of_items;

        if(no_of_items %10 ==0)
            cout<<no_of_items/10<<endl;
        
        else 
            cout<<(no_of_items/10)+1<<endl;
         
    }
    return 0;
}
