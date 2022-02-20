#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n,k;
        cin>>n>>k;

        string str;
        cin>>str;

        string temp;

        for(lli i=0;i<k;i++)
        {
            temp.push_back(str[i]);
        }
        lli i=k;
        lli count=0;
        while(i--)
        {
            reverse(temp.begin(),temp.end()-count);
            count++;
        }

        string left;
        for(lli i=k;i<n;i++)
        {
            left.push_back(str[i]);
        }

        cout<<temp+left<<endl;
    }
}