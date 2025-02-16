#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    decimal(a);
    return 0;
}
void decimal(int a){
    if (a>0) decimal(a/2);
    printf("%d", a%2);
}