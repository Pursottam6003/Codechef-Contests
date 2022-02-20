#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;


        if(str.size() >1)
        {
            if((str.find("11")<=str.size())|| (str.find("10")<=str.size()))
            {
                cout<<"YES"<<endl;
            }

            else 
            {
                cout<<"NO"<<endl;;
            }
        }


        else 
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}