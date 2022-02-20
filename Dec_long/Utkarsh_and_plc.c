//https://www.codechef.com/DEC21C/problems/UTKPLC

#include <stdio.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        char first;
        char second;
        char third;
        int flag=0;

        scanf("%c",&first);
        getchar();

        scanf("%c",&second);
        getchar();

        scanf("%c",&third);
        getchar();

        char x;
        char y;

        scanf("%c",&x);

        getchar();

        scanf("%c",&y);
        getchar();

        
        if(x==first && flag==0)
        {
            printf("%c\n",x);
            flag=1;
        }

        else if(y==first && flag==0)
        {
            printf("%c\n",y);
            flag=1;
        }

        else if(x==second && flag==0)
        {
            printf("%c\n",x);
            flag=1;
        }

        else if(y==second && flag==0)
        {
            printf("%c\n",y);
        }
    }
}