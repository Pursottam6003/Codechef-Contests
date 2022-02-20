#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli h,v;
        cin>>h>>v;

        string str;

        int len=0;
        if(h%2==0 && v%2==0)
        {   
            len=(h*v)+2;
            int flag=1;
            int counter=0;
            for(int i=0;i<len-1;i++)
            {
                if(flag==1)
                {   
                    str.push_back('1');
                    counter++;
                    if(counter >0 && v>0)
                    {
                        h--;
                    }
                    flag=0;
                }

                else if(flag==0)
                {   
                    str.push_back('0');
                    if(counter >0 && h>0)
                    {
                        v--;
                    }
                    flag=1;
                }

                str.push_back('0');
            }
        }

        else if(h%2 !=0 && v%2 !=0)
        {
            len = (h*v)-1;
            int flag=1;
            int counter=0;
            for(int i=0;i<len-1;i++)
            {
                if(flag==1)
                {   
                    str.push_back('0');
                    counter++;
                    if(counter >0 && v>0)
                    {
                        v--;
                    }
                    flag=0;
                }

                else if(flag==0)
                {   
                    str.push_back('1');
                    if(counter >0 && h>0)
                    {
                        h--;
                    }
                    flag=1;
                }
            }
            str.push_back('1');
        }

        else 
        {   
            len= (h*v)+1;

            if(h%2 ==0)
            {
                int flag=1;
                int counter=0;
                for(int i=0;i<len-1;i++)
                {
                    if(flag==1)
                    {   
                        str.push_back('1');
                        counter++;
                        if(counter >0 && v>0)
                        {
                            h--;
                        }
                        flag=0;
                    }

                    else if(flag==0)
                    {   
                        str.push_back('0');
                        if(counter >0 && h>0)
                        {
                            v--;
                        }
                        flag=1;
                    }
                }
                str.push_back('1');
                
            }

            else 
            {
                int flag=1;
                int counter=0;
                for(int i=0;i<len-1;i++)
                {
                    if(flag==1)
                    {   
                        str.push_back('0');
                        counter++;
                        if(counter >0 && v>0)
                        {
                            v--;
                        }
                        flag=0;
                    }

                    else if(flag==0)
                    {   
                        str.push_back('1');
                        if(counter >0 && h>0)
                        {
                            h--;
                        }
                        flag=1;
                    }
                }
                str.push_back('0');
            }


        }

        cout<<len<<endl;
        cout<<str<<endl;
    }
}