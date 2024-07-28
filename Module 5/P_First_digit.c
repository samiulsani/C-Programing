#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int num=x/1000;
    if(num%2==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}