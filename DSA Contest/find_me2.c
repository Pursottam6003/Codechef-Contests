#include <stdio.h>
#include<stdbool.h>

bool find(int num,int *arr,int finder_num);

int main()
{
    int num; // getting input for the no of elements in the array
    scanf("%d",&num);

    int finder_num; // ie k 
    scanf("%d",&finder_num);

    int arr[num]; //declearing an array

    // getting elements

    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(find(num,arr,finder_num))
    {
        printf("1");
    }

    else 
    {
        printf("-1");
    }

    return 0;

}

bool find(int num,int *arr,int finder_num)
{
    for (int i=0;i<num;i++)
    {
        if(finder_num==arr[i])
        {
            return true;
        }
    }

    return false;
}