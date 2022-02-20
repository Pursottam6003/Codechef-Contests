#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//no of strings
    set<string> s;
    cin>>n;
    string str; //declearing the string 

    for(int i=0;i<n;i++)
    {
        cin>>str;
        s.insert(str); //inserting the string  Timcecomplexity log(n)
        //as set elements inserts the elemensts or modify to sorted order     
    }

    for(auto value : s)
    {
        cout<<value<<endl;
    }
}