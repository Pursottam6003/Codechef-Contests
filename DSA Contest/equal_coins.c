#include<stdio.h>

int main()
{
    size_t t;// testcases
    scanf("%zu",&t);

    while(t--)
    {
        size_t x;
        size_t y;

        scanf("%zu",&x);
        getchar();
        scanf("%zu",&y);
        getchar();


        if(x==0)
        {
            if(y%2==0)
            {
                printf("YES\n");
            }

            else 
            {
                printf("NO\n");
            }
        }

        else 
        {
            if((x + 2*y)%2==0)
            {
                printf("YES\n");
            }
            else
            { 
                printf("NO\n");
            }
        }

        
    }
}