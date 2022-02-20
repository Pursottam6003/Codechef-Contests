#include <stdio.h>


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


    int counter =0; //counter variable help us in printing -1 or 1 only one time s

    for(int i=0;i<num;i++)
    {

        if(finder_num==arr[i])
        {
            counter++;
        }
        
       
    }

    if(counter==1)
    {
        printf("1");
    }

    else 
    {
        printf("-1");
    }

    return 0;

}