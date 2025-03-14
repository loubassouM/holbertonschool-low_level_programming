#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    char *arr = create_array(5, 'A');

    if (arr == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }

    for (int i = 0; i < 5; i++)
        printf("%c ", arr[i]);
    printf("\n");

    free(arr);
    return (0);
}
