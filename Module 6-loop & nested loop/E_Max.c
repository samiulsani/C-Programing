#include<stdio.h>
int main()
{
    int n,x,y=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x>y)
        {
            y=x;
        }
    }
    printf("%d\n",y);
    return 0;
}