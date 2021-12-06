#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;

        sort(str.begin(),str.end());

        int max_cool=0;
        int ans=0;
        for(int i=0;i<str.length();i++)
        {   
            ans=abs('a'-str[i])+1;
            max_cool=max_cool+(i+1)*ans;
        }

        cout<<max_cool<<endl;

    }


}