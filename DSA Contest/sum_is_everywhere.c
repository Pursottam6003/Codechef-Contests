
/*
You are given a number N and find the sum of the 
first N odd and even numbers in a line separated by space. 
All even and odd numbers should be greater than 0.
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    //for odd we have 
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        odd=odd+(2*i+1);
        
    }
    for(int i=1;i<=n;i++)
    {
        even=even+2*i;
    }

    printf("%d\n",odd);
    printf("%d\n",even);

    return 0;
}