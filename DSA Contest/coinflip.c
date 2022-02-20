
#include<stdio.h>

int main(void)
{
    
    int t; //testcases
    scanf("%d",&t);

    while(t--)
    {   
        int games;
        scanf("%d",&games);
        getchar();

        for (int k = 0; k < games; k++)
        {
            int I, N, Q; // I->iniitilisation N->no of games ,Q-> what we guess  like 1 for head 2 for tail ;
            scanf("%d %d %d",&I,&N,&Q);
            getchar();

            int coins[N];
            // initialising all the rounds with the  Initialiser I which was taken by user 
            
            for(int i=0;i<N;i++)
            {
                coins[i]=I; // I may be head ot tail
            }

            // for each rounds we are changing the rounds  H-->T or T--> H

            for(int i=0;i<N;i++)
            {
                for(int j=0;j<=i;j++)
                {
                    if(coins[j]==1)
                    {
                        coins[j]=2;
                    }

                    else
                    {
                        coins[j]=1;
                    }
                   
                }
               
            }

            int counter_h=0,counter_t=0;
            
            for(int i=0;i<N;i++)
            {
                if(coins[i]==1)
                {
                    counter_h++;
                }

                else
                {
                    counter_t++;
                }
            }

            if(Q==1)
            {
                printf("%d\n",counter_h);
            }

            else{
                printf("%d\n",counter_t);
            }

        }
    }
    return 0;
}