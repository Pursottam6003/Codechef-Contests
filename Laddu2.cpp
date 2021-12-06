#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int s;
        cin>>s;
        int size=pow(2,s);
        set<int> laddu;

        for(int i=0;i<size;i++)
        {
            long long laddu_ct;
            cin>>laddu_ct;
            laddu.insert(laddu_ct);//inserted the laddu in sorted order
        }
        auto  min=laddu.begin();
        auto max= --laddu.end();

        if(laddu.size()==1)
        {
            cout<<"YES"<<endl;
        }

     
        else if(laddu.size() >= 2 && (*max - *min<=1))
        {
            cout<<"YES"<<endl;
        }

        else 
        {
            cout<<"NO"<<endl;
        }

 
    }
}
