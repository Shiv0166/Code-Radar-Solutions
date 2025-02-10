#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N+1;i++){
        for(int j=65;j<=N+1-i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}