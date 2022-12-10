// Write a program to enter a temperature in Fahrenheit and convert it to Celsius.Input temperature in Fahrenheit from a user.Store it in some variable say Fahrenheit.

// Apply the temperature conversion formula : celsius = (fahrenheit - 32) * 5 / 9.Print the value of celsius.

// Input
// The temperature in Fahrenheit = 205 Output
// Temperature in celsius = 96.11 C

#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in celsius = %.2f C", celsius);
    return 0;
}

#include <stdio.h>

void printSet(int n)
{
    int i;
    for (i = 0; i < 32; i++)
    {
        if (n & 1 << i)
        {
            printf("%d ", i);
        }
    }
}

int addItem(int n, int i)
{
    return n | 1 << i;
}

int removeItem(int n, int i)
{
    return n & ~(1 << i);
}
void main()
{

    int n = 0;

    n = addItem(n, 6);
}