
/*
3
1
10
3
8 3 6
5
4 5 1 2 3
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n; // no of testcases
    scanf("%d",&n);

    int **cases= (int **)malloc(n * sizeof(int * ));

    int cars[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&cars[i]);
        cases[i]= malloc(cars[i]*sizeof(int));
        for(int j=0;j<cars[i];j++)
        {
            scanf("%d",&cases[i][j]);
        }
    }
    int ans[n];

    for(int i=0;i<n;i++)
    {   
        
        for(int j=0,min=2147483647;j<cars[i];j++)
        {   
            
            if(j>0 && cases[i][j-1]<min)
            {
                min=cases[i][j-1];
            }
            if(j==0)
            {
                ans[i]=1;
            }
            else if((cases[i][j] < cases[i][j-1]) && (cases[i][j]<min))
            {
               ans[i]++;
            }

        }

    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",ans[i]);
    }

    for(int i=0;i<n;i++)
    {
        free(cases[i]);
    }
    free(cases);
    

}



/*
// for understanding 
for(int j=0;j<cars[i];j++])
{
    scanf("%d",&cases[i][j])
}


for(i=0;i<n;i++)\
{
    for(int j=0,min=2^31-1;j<cars[i],j++)
    {
        if(j==0)
        {
            ans[i]=1;

        }
        if(j>0 && arr[i][j-1]<min)
        {
            min=arr[i][j-1];
        }

        else if(arr[i][j]<arr[i]][j-1] && arr[i][j]<min)
        {
            ans[i]++;
        }
    }
}





*/

