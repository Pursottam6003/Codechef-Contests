#include <stdio.h>
#include<stdlib.h>

int main()
{
    
    int *ptr;
    ptr=(int*) malloc(sizeof(int));


    for(int i=0;1;i++)
    {
        scanf("%d",&ptr[i]);
        ptr=realloc(ptr,(i+2)*sizeof(int));
        if(ptr[i]==42)
        {
            break;
        }
    }

    for(int i=0;ptr[i]!=42;i++)
    {
        printf("%d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}