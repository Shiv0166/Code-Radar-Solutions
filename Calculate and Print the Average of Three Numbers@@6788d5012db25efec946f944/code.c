#include<stdio.h>
int main() {
    int a,b,c;
    float sum;
    scanf("%d%d%d", &a,&b,&c);
    sum = (a+b+c)/3.0;
    printf("Average: %.2f\n",sum);
    retrun 0;
}