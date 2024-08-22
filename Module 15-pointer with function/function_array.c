#include <stdio.h>

void fun(int ar[], int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d", ar[i]);
    }
}

int main()
{
    int ar[5] = {1, 2, 3, 4, 5, 6};
    fun(ar, 5);
    return 0;
}