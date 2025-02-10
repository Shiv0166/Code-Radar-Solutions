#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=0;i<=N;i++){
        for(int j=65;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}