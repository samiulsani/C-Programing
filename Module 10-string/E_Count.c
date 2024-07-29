#include <stdio.h>
int main()
{
    char s[1000000];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count = count + s[i] - 48;
    }
    printf("%d", count);
    return 0;
}