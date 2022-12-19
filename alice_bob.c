// Alice and Bob have an array a of n integers. They decide to play a game with the array. In one move,

// One must choose an index i such that ai​>0. After that, he sets the value of ai​ to 0.
// Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, Alice makes the third one, and so on. If a player can't make any move, he/she loses. Who will win if both play optimally?

// Input
// The first line of the input contains one integer t(1≤t≤1000), the number of test cases.

// In each test case, the first line contains an integer n(1≤n≤50), the number of elements in a.
// The next line contains n integers a1​,a2​,…,an​(0≤ai​≤20), where ai​ is the ith element of a.

// Output
// For each test case, print the name of the winner in a single line. If Alice wins, print “Alice” (without quotes) otherwise print “Bob” (without quotes).

// Sample

// Input
// Output
// 3 3 0 0 0 2 0 5 3 2 0 6
// Bob Alice Bob

// Explanation
// In the first test case, Alice can't make any move, so she loses.
// In the second test case, Alice can choose the first element and set it to 0. Now, Bob can choose the second element and set it to 0. Now, Alice can't make any move, so she loses.
// In the third test case, Alice can choose the second element and set it to 0. Now, Bob can choose the first element and set it to 0. Now, Alice can't make any move, so she loses.

// Note
// In the first test case, Alice can't make any move, so she loses.
// In the second test case, Alice can choose the first element and set it to 0. Now, Bob can choose the second element and set it to 0. Now, Alice can't make any move, so she loses.
// In the third test case, Alice can choose the second element and set it to 0. Now, Bob can choose the first element and set it to 0. Now, Alice can't make any move, so she loses.

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                count++;
            }
        }
        if (count % 2 == 0)
        {
            printf("Bob ");
        }
        else
        {
            printf("Alice ");
        }
    }
    return 0;
}
