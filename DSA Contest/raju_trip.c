#include<stdio.h>

int main()
{
    int bus_number; //should be 4 digit number 

    scanf("%d",&bus_number);

    if (bus_number%5==0  || bus_number %6==0)
    {
        printf("YES");
    }

    else 
    {
        printf("NO");
    }

    return 0;

}