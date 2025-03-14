#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size);

int main(void)
{
    int *arr;
    unsigned int i, n = 5;

    arr = (int *)_calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]); // Should print "0 0 0 0 0"

    printf("\n");
    free(arr);
    return (0);
}
