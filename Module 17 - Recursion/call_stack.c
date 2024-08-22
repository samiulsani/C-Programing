#include <stdio.h>
void world()
{
    printf("world");
}
void hello()
{
    printf("hello ");
    world();
}
int main()
{
    hello();
    return 0;
}