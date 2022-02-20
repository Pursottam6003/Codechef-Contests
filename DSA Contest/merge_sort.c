/**********Detailed algorithm of merge sort *************/
// <<<<<<<<<<<<<<    Written by Pursottam Sah    >>>>>>>>>>>>>>

#include<stdio.h>

void merge_sort(size_t *array,size_t start,size_t end);

void merge(size_t *array ,size_t start,size_t middle,size_t end);

int main()
{
    size_t len; // declearing length of array 
    scanf("%zu",&len); // getting by the help of scanf 

    size_t array[len]; // delclearing an integer array of size of len

    // getting input elements from user 
    for(size_t i=0;i<len;i++)
    {
        scanf("%zu",&array[i]);
    }

    merge_sort(array,0,len); // calling the merge sort function now see the line number 32
    // passing the arguments :- array and providing the intial and final points 
    // printing the sorted array 
    for(size_t i=0;i<len;i++)
    {
        printf("%zu%s",array[i],(i!=len-1) ? "," : "\n"); 
    }
    return 0;
}

void merge_sort(size_t *array,size_t start,size_t end) 
{
    size_t middle =(start +end)/2;

    // writing one base case so to find the sorted array   NOT understood ? -->  GO to line 43
    if(end -start <=1)
    {
        return;
    }

    // in merge sort we first break the array to small parts until it becomes array of one element
    //array of one element is already sorted on itself as it has only one element

    //now for left and right side

    merge_sort(array,start,middle); // noe the intial position is same but its last position become middle 

    //for right side array
    merge_sort(array,middle,end); // for right side 

    // this funcion will work recursively and until the arrays become of one elements

    //calling the function for merge sort ---->> this will merge the array elements
    merge(array,start,middle,end);

}

void merge(size_t *array ,size_t start,size_t middle,size_t end)
{
    size_t m=0; //variable for traversing the element
    size_t n=0;
    size_t merge_length = end-start;

    // to store the sorted array we had created the temp array of size mergelength 

    size_t temp_arr[merge_length]; // creating the size as required

    for(size_t i=0;i<merge_length;i++)
    {   
        // checking the condtion that if the left array lements is smaller or not 
        // if smaller we will store them in temp

        /*first element of left array less than that of second one
        or comparing left array element with nothing in right array*/
        
        if( start +m <middle && (array[start +m] <array[middle+n] || middle+n >=end)) 
        {
            temp_arr[i]=array[start +m];
            m++;
        }

        else
        {
            temp_arr[i]=array[middle+n];
            n++;
        }
    }

    // copying the array elements from temp to array 
    for(size_t i=0;i<merge_length;i++)
    {
        array[start+i]=temp_arr[i];
    }

    return; // returning the soeted array 
}