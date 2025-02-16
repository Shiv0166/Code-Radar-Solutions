#include <stdio.h>
int main() {
    int N;
    int sum = 0;
    scanf("%d", &N);
    for(int i = 0; i<=N; i++){
        sum = sum+i;
    } printf("%d", sum);
    return 0;
}