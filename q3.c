#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    for (--i && ++j; i < 10; ++i)
    {
        printf("%d ", ++i);
    }
    return 0;
}

// explaination: the output will be 2 4 6 8 10
