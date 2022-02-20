#include<stdio.h>

int main()
{
    //declearing the size of array 

    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    //for a any valid triangle 
    //sum of two sides is equal to the third side 

    if(a+b>c && b+c>a && c+a>b)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
