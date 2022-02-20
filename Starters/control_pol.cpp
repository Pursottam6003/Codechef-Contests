//https://www.codechef.com/START26D/problems/SMOKE
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli n,x,y;  //n persons x emission of bus y emission of bus
        cin>>n>>x>>y;
        // 100 capacity of bus 4 capacity of car
        lli by_bus,by_car,by_carbus1,by_carbus2,charge_bus,charge_car,charge_both;

        if(n%4 ==0)
        {
            by_car=n/4;
        }
        else 
        {
            by_car=n/4+1;
        }
        
        if(n%100 ==0)
        {
            by_bus=n/100;
        }
        else if(n>100)
        {
            by_bus=n/100+1;
        }
        else if(n<=100)
        {
            by_bus=1;
            by_carbus1=1;
        }
           

        if(n>100)
        {
            lli num = (n%100);
            by_carbus1=n/100;
            by_carbus2= (n%100)/4;
            if(num %4 == 0)
            {
                by_carbus2=num/4;
            }
            else 
            {
                by_carbus2=(num/4)+1;
            }
        }
        charge_bus = x*by_bus;
        charge_car = y*by_car;
        
        charge_both =x*by_carbus1 + y*by_carbus2;
       
        lli ans= min(charge_car,min(charge_bus,charge_both));

        cout<<ans<<endl;
    }

    return 0;
}