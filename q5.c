#include <stdio.h>
#include <string.h>

int main()
{
    int i = 1, sum = 0;
    while (1)
    {
        sum += i++;
        if (sum > 78)
        {
            break;
        }
    }
    printf("%d", sum);
    return 0;
}