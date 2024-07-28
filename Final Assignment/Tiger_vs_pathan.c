#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int i=1;
    while(i<=t)
    {
        int n;
        scanf("%d",&n);
        
        char s[n];
        scanf("%s",&s);

        int count_T=0;
        int count_P=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='T')
            {
                count_T++;
            }
            else{
                count_P++;
            }
        }
        
        if(count_T>count_P)
        {
            printf("Tiger\n");
        }
        else if(count_P>count_T)
        {
            printf("Pathaan\n");
        }
        else{
            printf("Draw\n");
        }
        i++;
    }

    return 0;
}