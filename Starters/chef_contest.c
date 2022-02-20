#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    getchar();

    while(t--)
    {
        int x,y,p,q;
        scanf("%d %d %d %d",&x,&y,&p,&q);
        getchar();

        int chef_c= x+ (10*p);
        int frnd_c= y+(10*q);

        if (frnd_c > chef_c)
        {
            printf("Chef\n");
        }

        else if(frnd_c== chef_c)
        {
            printf("Draw\n");
        }

        else 
        {
            printf("Chefina\n");
        }
    }
}