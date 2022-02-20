
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
      
        int max=INT_MIN;
        int equal;
        
        bool isEqual=true;
        for(int i=0;i<n;i++)
        {
            if(max <arr[i])
            {
                max=arr[i];
            }
            
            if(i==0)
            {
                equal=arr[0];
            }
            
            else if(arr[i] !=equal)
            {
                isEqual=false;
            }
        }

        if(isEqual==true)
        {
            cout<<"0"<<endl;
        }

        else if(max==arr[n-1])
        {
            cout<<"1"<<endl;
        }

        else 
        {
            cout<<"2"<<endl;
        }
    }   
}