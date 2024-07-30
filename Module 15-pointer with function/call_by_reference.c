#include <stdio.h>
void fun(int *ptr)
{
    *ptr = 20;
}
int main()
{
    int x = 10;
    fun(&x);
    printf("%d\n", x);
    return 0;
}