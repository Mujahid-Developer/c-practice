#include <stdio.h>

int main () {

    int height;
    printf(".......................\n");
    printf("Enter Height in Inches: ");
    scanf("%d", &height);

    int feet, inche;

    feet = height/12;
    inche= height%12;

    printf("Your Height is %d feet %d inche", feet, inche);

    return 0;
}