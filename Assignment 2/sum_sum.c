#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int p_sum=0;
    int n_sum=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            p_sum+=arr[i];
        }
        else{
            n_sum+=arr[i];
        }
    }
    printf("%d %d ",p_sum,n_sum);
    return 0;
}