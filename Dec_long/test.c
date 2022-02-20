#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    char b;
    char c;

    scanf("%c",&a);
    getchar();
    scanf("%c",&b);
    getchar();
    scanf("%c",&c);
    getchar();

    if( a==b)
    {
        printf("Yes");

    }

    else 
    {
        printf("%c",a);
    }
}