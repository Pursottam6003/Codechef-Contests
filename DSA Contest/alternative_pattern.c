#include<stdio.h>

int main()
{
    int n; // getting input --> for the no of rows 
    scanf("%d",&n);

    int counter_odd=0; 
    int counter_even=0;

    for(int i=1;i<=n;i++)
    {   
        int j=i*5; //creating the condition

        if(i%2==0) //for checking even or odd row 
        {
            for(int k=j;k>counter_odd;k--)
            {
                printf(" %d ",k);
                counter_even=j+1;
            }
        }

        else if(i==1) // for the first raw 
        {
            for(int k=1;k<=j;k++)
            {   
                
                printf(" %d ",k);
                counter_odd=j;
            }
        }

        else // remainign odd raws
        {
            for(int k=counter_even;k<=j;k++)
            {
                printf(" %d ",k);
                counter_odd=j;
            }
        }

        printf("\n");
        
    }
}