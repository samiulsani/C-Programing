#include <stdio.h>
int main()
{
    int ar[5] = {1, 2, 3, 4, 5, 6};

    printf("%d", *ar + 1);
    // basically array first elements address er maddhome access kora hoi. ar amra jani je address manei pointer*. so, amara dereference er maddhomeo access korte pari.

    return 0;
}