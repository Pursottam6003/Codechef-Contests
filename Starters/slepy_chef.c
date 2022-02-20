#include <stdio.h>


int main()
{
    int t;
    scanf("%d\n",&t);
    getchar();

    while(t--)
    {
        int n,k;
        scanf("%d ",&n);
        scanf("%d",&k);
        getchar();
        int count=0;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            getchar();
            
        }

        for(int j=0;j<n;j++)
        {
            if(arr[j]==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}