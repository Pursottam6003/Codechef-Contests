//https://www.codechef.com/SDELP21C/problems/REMELEM

#include <stdio.h>
typedef long long int lli;

int main()
{
    lli t;
    scanf("%zu",&t);

    while(t--)
    {
        lli n,k;
        scanf("%zu",&n);
        getchar();
        scanf("%zu",&k);
        getchar();

        lli arr[n];
        for(lli i=0;i<n;i++)
        {
            scanf("%zu",&arr[i]);
        }

        if(k>n)
        {
            printf("YES\n");
        }

        else 
        {
            printf("NO\n");
        }
    }
}