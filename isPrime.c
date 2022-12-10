// Given an integer $N$, determine if it is a prime a number. A number is called prime if it is only divisible by itself.

// Input
// The input will contain one integer $N$($0 < N < 1000 $).

// Output
// Print $\texttt{Yes} $ if the integer is prime, otherwise $\texttt{No} $.

// Sample Input
// 7

// Sample Output
// Yes

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}