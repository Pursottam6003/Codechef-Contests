//reversing the elements
#include <stdio.h>

int main()
{
    int n; //number of elements for an array

    scanf("%d",&n);

    int array[n]; // declearing an array of size n

    //getting elements

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    //printing the reversed array

    for(int i=0;i<n;i++)
    {
        printf("%d ",array[n-i-1]);
    }

    return 0;
}