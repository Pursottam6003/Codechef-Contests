#include<stdio.h>
typedef long long int lli;

int main(){
    lli t;
    lli mod=998244353,inv=748683265;
    scanf("%zu",&t);
    while(t--)
    {
        lli n;
        scanf("%zu",&n);
        lli myans=inv;
        myans=(myans*n)%mod;
        myans=(myans*(n+1))%mod;
        myans=(myans*(n+1))%mod;
        printf("%zu\n",myans);
    }
    return 0;
}
