#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    int result = multiply(argv[1], argv[2]);
    if (result == -1)
    {
        printf("Error\n");
        return 98;
    }

    printf("%d\n", result);

    return 0;
}
