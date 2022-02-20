#include<stdio.h>
#include<string.h>
 
int main()
{
    // test comment
    int testcases;// no of testcases
    scanf("%d",&testcases);
 
    char str[testcases][1001];
 
 
    for(int i=0;i<testcases;i++)
    {    
        scanf("%s",str[i]);
    }
 
    for(int i=0;i<testcases;i++)
    {
        int check = 0;
        // for keeping track of frequency of characters in substrings
        int ch1[26], ch2[26];
        for (int k = 0; k < 26; k++)
        {
            ch1[k] = 0;
            ch2[k] = 0;
        }
 
        int n=strlen(str[i]); 
        int odd_factor;
 
        if(n%2==0)
        {
            odd_factor=0;
        }
 
        else
        {
            odd_factor=1;
 
        }
 
        for(int k=0;k<n/2;k++)
        {
            ch1[str[i][k] -'a']++;
            ch2[str[i][n/2+odd_factor+k] -'a']++;
        }
 
 
        for (int k = 0; k < 26; k++)
        {
            if (ch1[k] != ch2[k])
            {
                check=0;
            }
            else
            {
                check++;
            }
        }
 
        if(check==26)
            printf("YES\n");
        else
            printf("NO\n");
    }     
 
    return 0;
}