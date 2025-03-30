#include<stdio.h>
int sumofdigit(int n);
int main(){
    int N;
    scanf("%d",&N);
    int(arr[N], result[N]);
    for(int i = 0; i<N; i++){
        scanf("%d",&arr[i]);
        result = sumofdigit(arr[i]);
        for(int i =0; i<N; i++){
            printf("%d",result[i]);
        }
        return 0;
    }
}
int sumofdigit(int n){
    int sum = 0;
    while(n>0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}