#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int total=m1*d;
        int farmers=m1+m2;
        int days=total/farmers;
        int sum=d-days;
        printf("%d\n",sum);
        
    }
    return 0;
}