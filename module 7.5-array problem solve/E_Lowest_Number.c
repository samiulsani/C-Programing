#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int low=INT_MAX,pos=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<low)
        {
            low=a[i];
            pos=i;
        }
    }
    printf("%d %d",low,pos+1);
    return 0;
}