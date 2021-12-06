#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int size;
        cin>>size;

        int shop[size];
        for(int i=1;i<size;i++)
        {
            cin>>shop[i];
        }

        int n;
        cin>>n;

        int arr2[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr2[i];
        }

        for(int i=1;i<=n;i++)
        {

            if(i==1)
            {
                cout<<(shop[i]&shop[i+1])<<" ";
            }

            else if(i==n)
            {
                cout<<(shop[i-1]&shop[i])<<" ";
            }

            else 
            {
                cout<<max((shop[i]&shop[i+1]),(shop[i-1]&shop[i]))<<" ";
            }
        }
    }
}