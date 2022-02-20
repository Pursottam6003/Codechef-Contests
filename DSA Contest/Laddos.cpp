#include <bits/stdc++.h>
using namespace std;

int laddo_cal(long long int *arr,int n)
{
    sort(arr,arr+n);
    // we gonna to try to write the recursive function for that 
    int min= arr[0];
    int max= arr[n-1];

    if(max-min<=1)
    {
        return 1;
    }

    else 
    {
        return 0;
    }
   
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int s;
        cin>>s;
        int size=pow(2,s);
        
        long long int arr[size];

        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }

        if(laddo_cal(arr,size)==0)
        {
            cout<<"NO"<<endl;
        }

        else 
        {
            cout<<"YES"<<endl;
        }
    }
}
