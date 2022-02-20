#include <stdio.h>

void merge_sort(int *array, size_t start, size_t end);
void merge(int *array, size_t start, size_t middle, size_t end);

int main(void)
{
    size_t len;
    scanf("%zu", &len);

    int array[len];
    for (int i = 0; i < len; i++)
        scanf("%i", &array[i]);

    merge_sort(array, 0, len);

    for(size_t i = 0; i < len; i++)
        printf("%i%s", array[i], (i!=len-1) ? ", " : "\n");

    return 0;
}

void merge_sort(int *array, size_t start, size_t end)
{
    if (end - start <= 1)
        return;             // sorted

    size_t middle = (start + end) / 2;
    
    // sort left half
    merge_sort(array, start, middle);

    // sort right half
    merge_sort(array, middle, end);

    // merge
    merge(array, start, middle, end);
}

void merge(int *array, size_t start, size_t middle, size_t end)
{
    // length of merged array
    size_t merge_len = end - start;

    // temporary array for storing elements after merging
    int temp[merge_len];

    // iterators for left and right arrays
    size_t m = 0, n = 0;

    for (size_t i = 0; i < merge_len; i++)
    {
        /*first element of left array less than that of second one
        or comparing left array element with nothing in right array*/
        if (start + m <middle && (array[start + m] < array[middle + n] || middle + n >= end))
        {
            temp[i] = array[start + m];
            m++;
        }
        else
        {
            temp[i] = array[middle + n];
            n++;
        }
    }

    // populating the original array from temp
    for (size_t i = 0; i < merge_len; i++)
    {
        array[start + i] = temp[i];
    }

    return;
}