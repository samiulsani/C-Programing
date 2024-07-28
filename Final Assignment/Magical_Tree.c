#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int result=6+floor(n/2);
    int space=result;
    int star=1;
    for(int i=0; i<result; i++)
    {
        for(int j=1; j<space; j++)
        {
            printf(" ");
        }
        space--;
        for(int k=1; k<=star; k++)
        {
            printf("*");
        }
        star=star+2;
        printf("\n");
    }

    for(int i=0; i<5; i++)
    {
        for(int j=1; j<6; j++)
        {
            printf(" ");
        }
        for(int k=0; k<n; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}