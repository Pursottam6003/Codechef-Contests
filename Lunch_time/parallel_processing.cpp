//https://www.codechef.com/LTIME105D/problems/PLPROCESS

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

void find_minimum(lli *arr,lli size)
{

    sort(arr,arr+size);
 
    lli temp[size];
    int j=size-1;
    int ct=0;
    for(int i=0; i<size/2 && j >=size/2;i++)
    {
       temp[ct++]=arr[i];
       temp[ct++]=arr[j];
       j--;
    }

    //for taking the max part 
 
    lli sum1=0,sum2=0;
    for(int i=0;i<size/2;i++)
    {
        sum1+=temp[i];
    }

    for(int j=size/2;j<size;j++)
    {
        sum2+=temp[j];
    }

    int result=max(sum1,sum2);
    cout<<result<<endl;
}
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n;
        cin>>n;
        if(n%2 !=0)
        {
            lli arr[n+1];
            for(int i=0;i<n;i++)
            {   
                cin>>arr[i];
            }

            arr[n]=0;


        
            find_minimum(arr,n+1);
         
        }
        else 
        {
            lli arr[n];

            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }

            find_minimum(arr,n);
        }
       
   

     
    }

}
