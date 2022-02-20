
/*

1  2  3  4  5
10 9  8  7  6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
30 29 28 27 26

*/


#include <stdio.h>

int main()
{
    int n;
    n=4;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                even_func();
            }
            else
            {
                odd_func();
            }
        }

    }
}

