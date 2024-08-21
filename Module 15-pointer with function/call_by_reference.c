#include <stdio.h>
void fun(int *ptr)
{
    *ptr = 50;
}
int main()
{
    int x = 10;
    fun(&x);
    printf("%d\n", x);
    return 0;
}