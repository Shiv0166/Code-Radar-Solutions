#include<stdio.h>
int main() {
    int  a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    double sum = (a+b+c)/3;
    scanf("%lf", &sum);
    printf("Average", sum);
    return 0;
}