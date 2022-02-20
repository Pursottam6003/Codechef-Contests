#include <bits/stdc++.h>
using namespace std; 

struct mynum
{
    int x;
    int y;
    int z;
};

int main()
{
    int t;//testcases
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <mynum> myvec[n];

       
        int current_s=0;
        int current_p=0;
        int current_v=0;

        for(int i=0;i<n;i++)
        {
            cin>>current_s;
            cin>>current_p;
            cin>>current_v;

            myvec[i].push_back({current_s,current_p,current_v});
        }

        for(int i=0;i<n;i++)
        {
            cout <<myvec[i];
        }

        
    }
}