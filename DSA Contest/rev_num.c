#include<stdio.h>
#include<math.h>

int main()
{
    int n; //no of test case
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //reversing and printing the logic
    int number[n];
    for(int i=0;i<n;i++)
    {
        number[i]=0;
    }


    
    for(int i=0;i<n;i++)
    {  
        int counter=0;
        int k=0;
        while((int)arr[i]/(int)pow(10,k) !=0)
        {
            counter++;
            k++;
        }

        for(int j=0;j<counter;j++)
        {
            number[i]= number[i] +((arr[i] % (int)pow(10,j+1)) /(int)pow(10,j)) *(int)pow(10,counter-j-1);
        }
       
    }

    for(int j=0;j<n;j++)
    {
        printf("%d\n",number[j]);
    }

    return 0;
}