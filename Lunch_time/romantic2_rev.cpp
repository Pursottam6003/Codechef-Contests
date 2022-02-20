//https://www.codechef.com/LTIME103C/problems/RMNTREV

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n,k;
        cin>>n>>k;

        string str;
        cin>>str;

        string temp;
        
        lli j=k-1;
        for(lli i=0;i<(k)/2+1;i++)
        {   
            if(i<j)
            {
                temp.push_back(str[i]);
                temp.push_back(str[j]);  
            }

            else if(i==j) 
            {
                temp.push_back(str[i]);
                break;
            }
            j--;
        }
        // just reverse so to get the original string
        reverse(temp.begin(),temp.end());


        string left;
        for(lli i=k;i<n;i++)
        {
            left.push_back(str[i]);
        }

        cout<<temp+left<<endl;
    }
}