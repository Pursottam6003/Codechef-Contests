#include <stdio.h>

int main()
{
    char c1,c2;
    scanf("%c",&c1);
    getchar();
    scanf("%c",&c2);
    getchar();

    if(c1 == c2)
    {
        printf("%c\n",c1);
    }

    else if(c1=='R')
    {
        if(c2 =='B')
        {
            printf("%c\n",c1);
        }

        else if(c2 =='G')
        {
            printf("%c\n",c1);
        }
    }


    else if(c1 =='B')
    {
        if(c2 =='R')
        {
            printf("%c\n",c2);
        }

        else if(c2 =='G')
        {
            printf("%c\n",c1);
        }
    }

    else if(c1='G')
    {
        if(c2=='R')
        {
            printf("%c\n",c2);
        }
        else if(c2=='B')
        {
            printf("%c\n",c2);
        }
    }

}