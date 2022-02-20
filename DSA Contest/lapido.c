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
    {
        
        for(int j=0;j<1001;j++)
        {
            // for keeping track of frequency of characters in substrings
            int ch1[26], ch2[26];
            for (int k = 0; k < 26; k++)
            {
                ch1[i] = 0;
                ch2[i] = 0;
            }

            int n=strlen(str[i]); 
            for(int k=0;k<n/2;k++)
            {
                ch1[str[i] [k -'a']]++;
                ch2[str[i] [(n/2)- k -'a']]++;
            }

            for (int k = 0; k < 26; k++)
            {
                if (ch1[k] == ch2[k])
                {
                    check++
                    continue;
                   
                }

                else{
                    check=0;
                    break;
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