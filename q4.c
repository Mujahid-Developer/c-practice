#include <stdio.h>
#include <string.h>
int main()
{
    char source_str[100], target_str[100];
    gets(source_str);
    strcpy(source_str, target_str);
    puts(target_str);
    return 0;
}
// Sir it will return random text with emoji's and other symbols. because the strcpy function is not copying the string properly. it is copying the string with some extra characters.
