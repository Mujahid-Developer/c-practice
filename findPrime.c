// Read an integer variable and print it. the input will contain an integer AA(-200000000 < A < 200000000−200000000 < A < 200000000)

// Output
// Print the integer.

#include <stdio.h>
int main()
{
    int a;

    do
    {
        scanf("%d", &a);
    } while (a < -200000000 || a > 200000000);
    printf("%d", a);
    return 0;
}

// gcc findPrime.c -o findPrime