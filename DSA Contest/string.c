// *******************  To Mr Harsh Tiwari **************************

#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n); // no of testcases
    
    char str[n][101]; //creating a 2 d character array constraints is 100

    //input stings from the user
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);

    }
    //declearing character array for checking the ements present on both left side is same or not 
    char ch1[26];
    char ch2[26];

    for(int i=0;i<n;i++)
    {
        // first for loop for running the number of test cases
        for(int i=0;i<26;i++)
        {
            ch1[i]=0;
            ch2[i]=0;
        }
        int len=strlen(str[i]); //getting length of string

        int odd_factor; 

        if(len %2==0)
        {
            odd_factor=0;
        } 

        else
        {
            odd_factor=1;
        }

        if(len>1)
        {
            for(int j=0;j<100;j++)
            {
                for(int k=0;k<len/2;k++)
                {
                    ch1[str[i][k] -'a']++;
                    ch2[str[i][(len)/2 + k+odd_factor]-'a']++;
                }
            }

            int count=0;// count help us in identyfying the string is lapidome or not
            for(int i=0;i<26;i++)
            {
                if(ch1[i]!=ch2[i])
                {
                    count=0;
                }

                else
                {
                    count++;
                }
            }

            if(count==26)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }

        }

        else
        {
            printf("YES\n");
        }
       

    }
    
}