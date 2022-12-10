// Given an integer NN, print the NN-th Fibonacci number.

#include <stdio.h>

int main()
{
    // The input will contain an integer NN (0 < N < 500<N<50).
    int N;
    scanf("%d", &N);

    // Print the NN-th Fibonacci number.

    int a = 0;
    int b = 1;
    int c = 0;

    for (int i = 0; i < N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d", a);

    return 0;
}