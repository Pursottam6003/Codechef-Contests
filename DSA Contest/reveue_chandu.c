#include<stdio.h>

int main()
{
    size_t len;
    scanf("%zu",&len);
    size_t arr[len];

    for(size_t i=0;i<len;i++)
    {
        scanf("%zu",&arr[i]);
    }

    size_t revenue=0;
    for(size_t i=0;i<len;i++)
    {
        size_t price=arr[i],temp_revenue=0;
        for(size_t j=0;j<len;j++)
        {
            if(price<=arr[j])
            {
                temp_revenue+=price;
            }
        }
        if(temp_revenue >revenue)
        {
            revenue=temp_revenue;
        }
    }
    printf("%zu",revenue);
}