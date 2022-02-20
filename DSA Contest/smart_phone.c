#include<stdio.h>


void smartphone(int *revenue,int n);

int main()
{
    int n;// no of customers
    scanf("%d",&n);

    int revenue[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&revenue[i]);
    }

   

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(revenue[j]<revenue[j+1])
            {
                int temp;
                temp=revenue[j];
                revenue[j]=revenue[j+1]
                revenue[j+1]=temp;
            }
            else
            {
                revenue[i]=smallest;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",revenue[i]);
    }

    smartphone(revenue,n); // calling the function 
}

void smartphone(int *revenue,int n)
{
    int min_price;
    for(int i=0;i<n;i++)
    {
        int min_price= revenue[i]* n-i;
    }

    printf("%d",min_price);
}