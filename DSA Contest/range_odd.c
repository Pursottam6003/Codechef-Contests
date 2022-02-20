#include<stdio.h>

int main()
{
    //getting two numbers from user 

    int L;
    int R;

    scanf("%d %d",&L,&R);
    
    for(int i=L;i<=R;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}