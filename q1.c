#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = {"abbzzcdczzba"};
    int l = 0, h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            break;
        }
    }

    printf("%s is a palindrome\n", str);
    return 0;
}

// Explaination of the above code: what is the output of the following code?
// output: it will print abbzzcdczzba is a palindrome for the given string in while block. and then it will print abbzzcdczzba is a palindrome for the given string in main block.
