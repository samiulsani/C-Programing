#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0; i<n; i++)
    {
        b[i]=a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(b[i]>b[j])
            {
            int temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            
            }
        }
    }

    int c[n];
    for(int i=0; i<n; i++)
    {
        c[i]=a[i]-b[i];
        if(c[i]<0)
       {
        printf("%d ",c[i]*(-1));
       }
       else{
        printf("%d ",c[i]);
       }

    }
    printf("\n");

    if(t==0)
    {
        break;
    }
    }

    return 0;
}