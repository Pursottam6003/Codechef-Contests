//https://www.codechef.com/LTIME105D/problems/MOVIE2X

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{

    lli x_min,y_min;
    cin>>x_min>>y_min;
    lli ans=y_min/2;
    cout<<x_min-ans<<endl;   
    return 0;
}