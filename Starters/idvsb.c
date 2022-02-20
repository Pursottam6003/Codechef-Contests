#include <stdio.h>
typedef long long int lli;

int main()
{
    lli t;
    scanf("%zu",&t);

    while(t--)
    {
        lli n;
        scanf("%zu",&n); // we have to creat an array of n size and the elements of that array must be in range n
         
        lli ans[n+1];

       
        int cout_evn=0;
        int count_od=0;

        if(n%2 ==0)
        {
            lli size = n/2;
            lli even[size];
            lli odd[size];

            for (lli i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    even[cout_evn++]=i;
                }
            }

            for (lli i=1;i<=n;i++)
            {
                if(i%2 != 0)
                {
                    odd[count_od++]=i;
                    
                }
            }


            int ct=0;
            int ct_od=0;
            ans[1]=odd[0];
            for(lli i=1;i<=n;i++)
            {
                if(i%2 != 0)
                {
                    ans[i]=even[ct];
                    ct++;
                }

                else 
                {
                    ans[i]=odd[ct_od];
                    ct_od++;
                }
            }
       

            

        }


        else    
        {   
            lli even[n/2];
            lli odd[n/2+1];

            for (lli i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    even[cout_evn++]=i;
                }
            }

            for (lli i=1;i<=n;i++)
            {
                if(i%2 != 0)
                {
                    odd[count_od++]=i;
                    
                }
            }


            int ct=0;
            int ct_od=1;
            ans[1]=odd[0];
            for(lli i=2;i<=n;i++)
            {
                if(i%2 != 0)
                {
                    ans[i]=even[ct];
                    ct++;
                }

                else 
                {
                    ans[i]=odd[ct_od];
                    ct_od++;
                }
            }
       


        }
       

       
        for(lli i=1;i<=n;i++)
        {
            printf("%zu ",ans[i]);
        }
    }
}