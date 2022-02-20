//finding the second largest 

#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a>b && b>c)
    {
        printf("%d",b);

    }

    else if (c>a && a>b)
    {
        printf("%d",a);
    }

    else if(c>b && b>a)
    {
        printf("%d",b);
    }

    else if (a>c && c>b)
    {
        printf("%d",c);

    }

    else if (b>a && a>c)
    {
        printf("%d",a);
    }

    else{
        printf("%d",c);
    }
    
    return 0;
}