#include <stdio.h>

int main()
{
    int t;//testcases
    scanf("%d",&t);

    while(t--)
    {
        int p,d,a,b,k;
        scanf("%d",&p);
        getchar();
        scanf("%d",&d);
        getchar();
        scanf("%d",&a);
        getchar();
        scanf("%d",&b);
        getchar();
        scanf("%d",&k);
        getchar();

        int i=k;
        int final_pet= p;
        int final_des= d;
        while(i--)
        {
            final_pet=final_pet+a;
            final_des=final_des+b;
        }

        if(final_pet> final_des)
        {
            printf("DIESEL\n");
        }

        else if(final_des == final_pet)
        {
            printf("SAME PRICE\n");
        }

        else 
        {
            printf("PETROL\n");
        }
    }
}