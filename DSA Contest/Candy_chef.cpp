#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;//testcases
    cin>>t;
    
    int num;
    while(t--)
    {
        int n,k;//no of
        cin>>n>>k;
        multiset<long long > bags;

        for(int i=0;i<n;i++)
        {
            long long candy;
            cin>>candy;
            bags.insert(candy);
        }
        long long total_candy=0;
        for(int i=0;i<k;i++)
        {
            auto last_it = (--bags.end());//last se ek kam matlab sabse bada element in the set
            long long candy= *last_it; //grasping the last element
            total_candy+=candy;
            bags.erase(last_it);
            bags.insert(candy/2);
        }

        cout<<total_candy<<endl;
    }
    
}