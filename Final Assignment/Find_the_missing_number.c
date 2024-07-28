#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int i=1;
    while(i<=t)
    {
        int m,a,b,c;
        scanf("%d %d %d %d",&m,&a,&b,&c);

        if(m!=0)
        {
            int count=-1;
            for(int i=1; i<=m/2; i++)
            {
                if((a*b*c)*i==m)
                {
                    printf("%d\n",i);
                    count++;
                }
            }
            if(count==-1)
            {
                printf("%d\n",-1);
            }
        }
        else
        {
            printf("%d\n",0);
        }
        i++;
    }

    return 0;
}