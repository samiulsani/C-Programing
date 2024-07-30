#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    // int length=strlen(a);
    for(int i=0; i<=strlen(b); i++)
    {
        a[i]=b[i];
    }

    //buildin function
    // strcpy(a,b);

    // for(int i=0; i<=6; i++)
    // {
    //     printf("%s",a[i]);
    // }
    printf("%s",a);

    return 0;
}