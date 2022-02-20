/*
Input:
7 3
1
51
966369
7
9
999996
11

Output:
4
*/

#include <stdio.h>

int main()
{   
    long long int n; //size
    //declearing array

    long long int val; //checking the number

    scanf("%lld",&n);
    scanf("%lld",&val);

    long long int num[n]; 

    long long int counter=0;

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);

    }

    for(int i=0;i<n;i++)
    {
        if(num[i]%val==0)
        {
            counter=counter+1;
        }
        
    }
 
    printf("%lld\n",counter);

    return 0;

}
