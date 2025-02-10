#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        for(int j=0;j<N-1;j++){
            printf(" ");
        }
        for(int k=o;k<=(2*i-N); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}