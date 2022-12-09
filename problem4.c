// Write a program to find the smallest number among three numbers according to following algorithm:


#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a < b){
        if(a < c){
            printf("%d is the smallest number", a);
        }else{
            printf("%d is the smallest number", c);
        }
    }else{
        if(b < c){
            printf("%d is the smallest number", b);
        }else{
            printf("%d is the smallest number", c);
        }
    }
    return 0;
}