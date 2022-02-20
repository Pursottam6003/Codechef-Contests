#include<stdio.h>

int main(void){
    int num;
    scanf("%d",&num);

    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);

    }

    int zeroes[num];
    for(int i=0;i<num;i++)
    {
        zeroes[i]=0;
    }

    for(int i=0;i<num;i++)
    {   int k=0;
        for(int j=5;j<=arr[i];j=j*5)
        {
            k=arr[i]/(j);

            zeroes[i]=zeroes[i]+k;
            
                
            
        }
    }

    for(int i=0;i<num;i++)
    {
        printf("%d\n",zeroes[i]);
    }
    return 0;
}