#include<stdio.h>

int main()
{
    unsigned long long int n;
    scanf("%llu",&n);

    unsigned long long int factorial=1;
    for(unsigned long long int i=0;i<n;i++)
    {
        factorial=factorial*(n-i);
    }

    printf("factorial is %llu",factorial);
}