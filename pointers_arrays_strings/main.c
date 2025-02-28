#include <stdio.h>
#include "main.h"

int main(void)
{
    char *tests[] = {
        "123", "-123", "0",
        "abc123", "-+--123", "hello -42",
        "123abc456", "--42xyz", "  +98test",
        "2147483647", "-2147483648", "999999999999", "-999999999999"
    };
    for (int i = 0; i < 13; i++)
        printf("Input: \"%s\" -> Output: %d\n", tests[i], _atoi(tests[i]));

    return 0;
}
