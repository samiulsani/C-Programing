#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>=97 && x<=122)
    {
        printf("%c\n",x-32);
    }
    else
    {
        printf("%c\n",x+32);
    }
    return 0;
}