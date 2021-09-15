#include<stdio.h>

int main() {
    int x, y;
    printf("Input x : ");
    scanf_s("%d", &x);
    printf("Input y : ");
    scanf_s("%d", &y);
    x = x ^ y, y = x ^ y, x = x ^ y;
    printf("After Swapping : x= %d  y= %d", x, y);
    return 0;

}