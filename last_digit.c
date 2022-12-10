// Take last 3 digits of your ID as input and then print the output using the following formula: y = (last 3 digits) modulo 7 + 1

#include <stdio.h>
int main(){
    int id;
    printf("Enter your ID: ");
    scanf("%d", &id);
    int y = (id%1000)%7 + 1;
    return 0;
}