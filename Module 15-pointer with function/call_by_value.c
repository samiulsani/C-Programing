#include <stdio.h>

void fun(int x)
{
    x = 10;
}

int main()
{
    int x = 20;
    fun(x);
    printf("%d", x);
    return 0;
}