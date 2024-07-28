#include<stdio.h>
int main()
{
    int n,y;
    scanf("%d",&n);
    int even=0;
    int odd=0;
    int positive=0;
    int negative=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&y);

        if(y%2==0)
        {
            even++;
        }
        else{
            odd++;
        }

        if(y>0)
            {
                positive++;
            }
        else if(y<0)
            {
                negative++;
            }      
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);
    return 0;
}