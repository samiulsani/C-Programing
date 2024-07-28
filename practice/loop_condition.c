#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d - even \t",i);
        }
        else{
            printf("%d - odd \t",i);
        }
    }
    return 0;
}