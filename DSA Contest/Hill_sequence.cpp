#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        set <int> s1;
        for(int i=0;i<n;i++)
        {
            int n;
            cin>>n;
            s1.insert(n);
        }

        if(s1.size()==n)
        {
            for(int it: s1)
            {
                cout<<it ;
                
            }
            cout<<endl;
        }

        else 
        {
            cout<<"-1";
        }

    }
}