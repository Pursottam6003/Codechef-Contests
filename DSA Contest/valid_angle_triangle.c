
#include<stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    if(a>0 &&b>0 && c>0)
    {
        if(a+b+c==180.0)
        {
            printf("YES");
        }

        else{
            printf("NO");
        }

    }
    

    else
    {
        printf("NO");
    }

    return 0;
}