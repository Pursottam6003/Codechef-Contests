#include<stdio.h>
#include<string.h>



int main()
{
    int testcases;
    int activities;
    char origin[30];

    scanf("%d",&testcases);

    for(int i=0;i<testcases;i++)
    {
        scanf("%d ",&activities);

        // type origin as INDIAN else NOT_INDIAN
        scanf("%s",origin);

        int min_redeem;

        min_redeem = (strcmp(origin,"INDIAN")==0) ? 200 : 400;


        int laddos=0;
        for(int i=0;i<activities;i++)
        {
            char act_name[30];
            int rank=0,serverity=0;
         
            //    CONTEST_WON 1
            //    TOP_CONTRIBUTOR
            //    BUG_FOUND 100
            //    CONTEST_HOSTED
            scanf("%s",&act_name[0]);

            if (strcmp(act_name,"CONTEST_WON") ==0)
            {
                scanf("%d",&rank);
                getchar();

                if (rank <= 20)
                    laddos=laddos+300+20-rank;
                else
                    laddos = laddos + 300;
                
            }

            else if(strcmp(act_name,"TOP_CONTRIBUTOR")==0)
            {
                laddos=laddos+300;
            }

            else if(strcmp(act_name,"BUG_FOUND") == 0)
            {
                scanf("%d",&serverity);
                getchar();

                laddos=laddos+serverity;
              
            }            

            else if(strcmp(act_name,"CONTEST_HOSTED") == 0)
            {
                laddos=laddos+50;
                
            }
        }

        if(min_redeem==200)
        {
            printf("%d\n",laddos / min_redeem);
        }

        else
        {
            printf("%d\n",laddos/min_redeem);
        }
    }
}