#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int result=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            result=i;
            break;
        }
    }
    // if(result==-1)
    // {
    //     printf("%d\n",-1);
    // }
    // else{
    //     printf("%d\n",result);
    // }
    printf("%d\n",result);
    return 0;
}