#include<stdio.h>

int main()
{
    size_t t;// testcases
    scanf("%zu",&t);

    while(t--)
    {
        size_t second;
        scanf("%zu",&second);
        int finalz_pos=0;
        int flag=1;
        for(int i=0;i<second;i++)
        {
            if(flag==1)
            {
                finalz_pos=finalz_pos+3;
                flag=0;
            }

            else if(flag==0)
            {
                finalz_pos=finalz_pos-1;
                flag=1;
            }
        }

        printf("%d\n",finalz_pos);
    }
    
}