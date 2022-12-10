// Read an integer variable and print all of its divisors(including 1 and the number itself).

// Input
// The input will contain an integer AA (0 < A < 1000<A<100).

// Output
// Print the divisors in increasing order, one per line.

#include <stdio.h>
int main()
{
    int a;
    do
    {
        scanf("%d", &a);
    } while (a < 0 || a > 1000);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

// how to run this code?
// gcc vjudge_b.c -o vjudge_b