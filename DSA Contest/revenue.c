
#include<stdio.h>

void merge_sort(size_t *arr,size_t start ,size_t end); //defining the function 

void merge(size_t *arr,size_t start,size_t middle,size_t end);

void max_revenue(size_t *arr,size_t len);


int main()
{
    size_t len;
    scanf("%zu",&len);

    size_t arr[len];

    for(size_t i=0;i<len;i++)
    {
        scanf("%zu",&arr[i]);

    }
    merge_sort(arr,0,len);

   
    size_t revenue=0;
    for(size_t i=0;i<len;i++)
    {
        size_t temp_revenue=0;
            
        temp_revenue= arr[i]*(len-i);//14 20 30 53 
            
        if(temp_revenue >revenue)
        {
            revenue=temp_revenue;
        }
    }
    printf("%zu",revenue);

}

void merge_sort(size_t *arr,size_t start , size_t end)
{
    size_t middle= (start+end)/2;
    //creating one condition 
    if(end-start <=1) // one element array --> sorted 
    {
        return;
    }
    //for the left side array
    merge_sort(arr,start,middle);

    //for the right side array
    merge_sort(arr,middle,end);

    merge(arr,start,middle,end); // another function 
}

void merge(size_t *arr,size_t start,size_t middle,size_t end)
{
    size_t length = end-start;

    size_t m=0; //for left array
    size_t n=0; //for right array
    
    size_t temp_array[length]; //creating one array

    for(size_t i=0;i<length;i++)
    {
        if(start +m < middle && (arr[start +m]<arr[middle+n] || middle +n>=end))
        {
            temp_array[i]=arr[start+m];
            m++;
        }

        else
        {
            temp_array[i]=arr[middle+n];
            n++;
        }
    }

    for(size_t i=0;i<length;i++)
    {
        arr[start +i]=temp_array[i];
    }

    return;
}


// void bubble_sort(int *arr,int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp;
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }

//     //printing the sorted array
// }

// void max_revenue(size_t *arr,size_t len)
// {
//     size_t max[len];

//     for(size_t i=0;i<len;i++)
//     {
//         max[i]=arr[i]*(len-i);
//     }
   
//     size_t maximum_revenue=max[0];
//     size_t counter=0;
//     for(size_t i=0;i<len-1;i++)
//     {
//         if(maximum_revenue < max[i+1])
//         {
//             maximum_revenue=max[i];
//             counter++;
//         }
//     }

//     printf("%zu",max[counter]);

// }