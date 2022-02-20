#include<stdio.h>

int main(void)
{
    
    int t; //testcases
    scanf("%d",&t);

    while(t--)
    {   
        int games;
        scanf("%d",&games);

        for (int k = 0; k < games; k++)
        {
            int I, N, Q; // I->iniitilisation N->no of games ,Q-> what we guess  like 1 for head 2 for tail ;
            scanf("%d %d %d",&I,&N,&Q);

            int coins[N];
            //initialising all the rounds with the  Initialiser I which was taken by user 

            for(int i=0;i<N;i++)
            {
                coins[i]=I; // I may be head ot tail
            }

            // for each rounds we are changing the rounds  H-->T or T--> H
            int counter_h=0,counter_t=0;
            if(N %2 ==0)
            {
                counter_h= N/2;
                counter_t=N/2;
            }

            else
            {
                // for odd 
                if(I==1 && Q==1)
                {
                    counter_h=N/2;
                }

                if(I==1 && Q==2)
                {
                    counter_t = (N/2)+1;
                }

                if(I==2 && Q==1)
                {
                    counter_h= (N/2)+1;
                }

                if(I==2 && Q==2)
                {
                    counter_t=N/2;
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