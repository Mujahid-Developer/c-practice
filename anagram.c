// An anagram is a word formed by rearranging the letters of another word. The words "listen" and "silent" has the same letters in them appearing the same number of times.This makes these two words anagram to each other. Given two words, you need to determine if they are anagrams of each other.

// Input Format:
// The input will contain two strings AA and BB(0 < \texttt{Length of A and B} < 1000 < Length of A and B < 100), one per line. AA and BB will contain lowercase alphabets only.

//     Output Format
// Print \texttt{Yes} Yes if the two words are anagrams of each other, otherwise \texttt{No} No.

//     Sample Input
//     listen
//     silent

//     Sample Output
//     Yes

#include <stdio.h>

int main()
{
    char a[1000], b[1000];
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] > a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    for (l = 0; b[l] != '\0'; l++)
    {
        for (m = l + 1; b[m] != '\0'; m++)
        {
            if (b[l] > b[m])
            {
                n = b[l];
                b[l] = b[m];
                b[m] = n;
            }
        }
    }
    for (o = 0; a[o] != '\0'; o++)
    {
        if (a[o] != b[o])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}