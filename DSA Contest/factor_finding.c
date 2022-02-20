
/* find all distinct factors of number
In the first line print number of distinct factors of N.
In the second line print all distinct factors in ascending order separated by space.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int counter_variable=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            counter_variable++;
        }
    }

    printf("%d\n",counter_variable);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
}