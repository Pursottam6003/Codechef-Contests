#include <stdio.h>

int invalid_tri(int a, int b, int c);

int main()
{
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a>0 && b>0 && c>0)
    {
        if(invalid_tri(a, b, c))
        {
            printf("-1");
        }
        else if(a==b && b==c && a==c)
        {
            printf("1");
        }

        

        else if(a!=b && b!=c && a!=c)
        {
            printf("3");
        }

       

        else if(a==b !=c || b==c !=a || a==c !=b) //isspcles 
        {
            printf("2");
        }

        else{
            printf("-1");
        }
    }
    

    else
    {
        printf("-1");
    }

    return 0;
}

int invalid_tri(int a, int b, int c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        return 0;    
    }

    else
    {
        return 1;
    }
}