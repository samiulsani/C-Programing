#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);

        while(1)
        {
            printf("%d ",x%10);
            x=x/10;
            if(x==0)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}