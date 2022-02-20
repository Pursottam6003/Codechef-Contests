#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]+b[i]);
    }

    return 0;
}