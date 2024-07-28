#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char s[10000];
        scanf("%s",s);
        int count_cap=0;
        int count_sm=0;
        int count_num=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                count_cap++;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                count_sm++;
            }
            else{
                count_num++;
            }
        }
        printf("%d %d %d\n",count_cap,count_sm,count_num);
    }
    return 0;
}