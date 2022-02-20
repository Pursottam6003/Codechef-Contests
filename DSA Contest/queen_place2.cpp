#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;//no of rows
        cin>>n;
        char queen='Q';
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==2 && j==2)
                {
                    cout<<queen;
                }

                else if(i>=4 && i==j)
                {
                    cout<<queen;
                }

                else 
                {
                    cout<<".";
                }
            }
            cout<<endl;
        }
    }
}