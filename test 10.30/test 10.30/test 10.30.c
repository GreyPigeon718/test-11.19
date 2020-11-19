#include <stdio.h>
#include <stdlib.h>
int main(int length, char** args)
{
    // GO(length, args);
    // GO = a;
    // GO(length, args);
    if (length - 1)
    {
        printf("Hello World!");
    }
    else
    {
        main(length + 1, args);
    }
    return 0;
}