#include <stdio.h>
#include <merge_sort.h>

int main(void)
{
    size_t n;
    printf("no. of elements: ");
    scanf("%zu", &n);

    size_t arr[n];
    for (size_t i = 0; i < n; i++)
        scanf("%zu", &arr[i]);

    merge_sort(arr, 0, n);
    
    for (size_t i = 0; i < n; i++)
        printf("%zu ", arr[i]);
    printf("\n");

    return 0;
}