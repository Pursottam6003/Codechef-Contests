//https://www.codechef.com/START20C/problems/STBARR

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
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int check[101];
        for(int i=0;i<101;i++)
        {
            check[i]=0;
        }

        int count=0;
        int sigle=0;
        for(int i=0;i<n;i++)
        {
            check[arr[i]]+=1;
        }

        count=check[0];
        for(int i=1;i<101;i++)
        {
            if(check[i]>1)
            {
                count+=check[i];
            }
        }

        int max=arr[0];

        for(int i=1;i<n;i++)
        {
            if(max <arr[i])
            {
                max=arr[i];
            }
        }

        if(max ==arr[n-1] && count == n)
        {
            cout<<"0"<<endl;
        }

        else if(max==arr[n-1] && count !=n)
        {
            cout<<"1"<<endl;
        }

        else 
        {
            cout<<"2"<<endl;
        }
    }   
}