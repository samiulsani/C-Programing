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
            if(m%(a*b*c)==0)
            {
                printf("%d\n",m/(a*b*c));
            }
            else{
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