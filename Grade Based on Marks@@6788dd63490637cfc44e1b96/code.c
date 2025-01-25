#include <stdio.h>
int main() {
    int shiv;
    scanf("%d", &shiv);
    if(shiv >= 90) {
        printf("A");
    }
    else if(shiv < 90 && shiv >= 80) {
        printf("B");
    }
    else if(shiv < 80 && shiv >= 70) {
        printf("C");
    }
    else if(shiv < 70 && shiv >= 60) {
        printf("D");
    }
    else {
        printf("F");
    }
    return 0;
}