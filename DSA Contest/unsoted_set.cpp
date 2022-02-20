//we can use unorderd set where we have to find just the element is present or not in a

//ecample
/* given N strings and Q queries in each query you are given a string 
print YES if it is present otherwise print NO*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//no of strings
    unordered_set<string> s;
    cin>>n;
    string str; //declearing the string 

    for(int i=0;i<n;i++)
    {
        cin>>str;
        s.insert(str); //inserting the string  Timcecomplexity log(n)
        //as set elements inserts o(1)
    }
    int q;
    cin>>q;
    while(q--)
    {
        string str1;
        cin>>str1;
        if(s.find(str1)==s.end())
        {
            cout<<"NO"<<endl;
        }

        else 
        {
            cout<<"YES"<<endl;
        }
    }
}