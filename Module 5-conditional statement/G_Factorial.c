#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        long long int factorial=1;

        while(n!=0)
        {
            factorial=factorial*n;
            n--;
        }
        
        printf("%lld\n",factorial);
    }
    return 0;
}