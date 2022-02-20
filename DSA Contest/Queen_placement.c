#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n); //input of rows

        int arr[n][n]; //creating a 2d array of length same as n length;

        int r=n;
        int c;

        int no_of_queens=n-2; //queens on the board
        char queen='Q';

        if(n==3)
        {

            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i==2 && j==2 )
                    {   
                        if(no_of_queens >0)
                        {
                            printf("%c",queen);
                            no_of_queens--;
                        }
                    }   

                    else 
                    {
                        printf(".");
                    }
                }
                printf("\n");
            }
        }


        else 
        {   
            int iterator=0;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(( i==2 && j==2 ) || (i>=3+iterator && i==j))
                    {   
                        if(no_of_queens >0)
                        {
                            printf("%c",queen);
                            no_of_queens--;
                            iterator++;
                        }
                    }   

                    else 
                    {
                        printf(".");
                    }
                }
                printf("\n");
            }
        }

    }
}