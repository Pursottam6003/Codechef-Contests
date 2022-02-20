
#include <stdio.h>
#include<stdlib.h>




int  digit_sum(size_t *num,size_t j);
int main()
{
    static int t; //testcases
    scanf("%d",&t);
    
    while(t--)
    {   
        static size_t k;
        scanf("%zu",&k);

        static int *num;
        num=(int*)malloc(k*sizeof(int));


        int first,second;
        scanf("%d %d",&first,&second);

        // size_t num[k]; //creating one array

        num[0]=first;
        num[1]=second;
       
        for(size_t j=2;j<k;j++)
        {
            num[j]=(digit_sum(num,j)) %10; //calling the function 
        }
        
        int result=0;

        for(size_t i=0;i<k;i++)
        {
          //  printf("%zu",num[i]);
          result =result+num[i];

        }

       // result = num[k-1];

        if(result %3==0)
        {
            printf("YES\n");

        }

        else
        {
            printf("NO\n");
        }

        for(size_t i=0;i<k;i++)
        {
            free(num);
        }
        free(num);
    }

    return 0;
}

int digit_sum(size_t *num,size_t j)
{   
    size_t sum=0;
    for(size_t i=0;i<j;i++)
    {
        sum=sum+num[i];
    }

    return sum;
    
}