#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=1; i<N+1;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}