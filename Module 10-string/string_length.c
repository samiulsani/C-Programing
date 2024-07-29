#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int i = 0, count = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;
}