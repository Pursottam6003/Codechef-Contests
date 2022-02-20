/*
Example:
Input:
6
ga ga
abcde
rotor
xyzxy
abbaab
ababc


Output:
YES
NO
YES
YES
NO
NO
*/


#include<stdio.h>
#include<string.h>

int main()
{
    int testcases;// no of testcases
    scanf("%d",&testcases);

    char str[testcases][1000];


    for(int i=0;i<testcases;i++)
    {
        scanf("%s",str[i]);
    }

    int check;

    for(int i=0;i<testcases;i++)
    {       check =0;
        for(int j=0;j<1001;j++)
        {
            int n=strlen(str[i]);
            //now we will check and change our condition for stringlength even or odd  
            if(n%2==0) // when string length is even 
            {
                for(int k=0;k<n/2;k++)
                {
                    if(str[i][k]==str[i][(n/2)+k])
                    {
                        check=1;
                    }
                }
            }

            else
            {   //abcde 
                for(int k=0;k<=(n/2);k++)
                {
                    if(str[i][k]==str[i][n-k])
                    {
                       
                    }
                }
            }
           
        }

        if(check==1)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }

    }

    

}