#include <stdio.h>

void fun(int i)
{
    if (i == 0)
        return;
    int x = i % 10;
    fun(i / 10);
    printf("%d ", x);
}

int main()
{
    int i;
    scanf("%d", &i);
    fun(i);
    return 0;
}