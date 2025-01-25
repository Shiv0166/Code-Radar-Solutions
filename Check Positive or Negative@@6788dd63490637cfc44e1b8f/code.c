#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a > 0){
        printf("%d", Positive);
    }
    else if(a<0){
        printf("%d", Negative);
    }
    else{
        printf("%d", Zero);
    }
    return 0;
}