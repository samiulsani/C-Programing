#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int com = strcmp(a, b);
    if (com == 0)
    {
        printf("same");
    }
    else if (com == -1)
    {
        printf("a is less than b");
    }
    else
    {
        printf("b is less than a");
    }

    return 0;
}