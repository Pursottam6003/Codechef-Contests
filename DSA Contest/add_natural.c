
#include<stdio.h>

int main()
{
    int n;
    // declearing the variable that help us in finding sum
    scanf("%d",&n);

    int sum=0;
    for(int i=n;i>=0;i--)
    {
        sum=sum+n-i;
    }

    printf("%d",sum);

    return 0;
}