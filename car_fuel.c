//https://www.codechef.com/SDELP21C/problems/CARRANGE

#include <stdio.h>
typedef long long  int lli;

int main()
{
    lli t;
    scanf("%zu",&t);

    while(t--)
    {
        lli p,m,v;

        scanf("%zu",&p);
        getchar();
        scanf("%zu",&m);
        getchar();
        scanf("%zu",&v);
        getchar();

        lli min= m-(p-1);

        lli ans= min*v;

        printf("%zu\n",ans);
    }
}