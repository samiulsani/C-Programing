#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=10 && n<=99)
    {
        int x=0;
        int y=0;
        x=n%10;
        y=n/10;
        if(x%y==0 || y%x==0)
        {
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}