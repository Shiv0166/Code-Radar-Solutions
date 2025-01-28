#include <stdio.h>
int main() {
    int a, citizen;
    scanf("%d %d", &a, &citizen);
    if(a >= 18 && citizen == 1) {
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}