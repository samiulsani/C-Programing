#include<stdio.h>
int main()
{
    char a[100];
    // gets(a);
    fgets(a,100,stdin);//variable name, size of string, standard input
    printf("%s",a);

    return 0;
}