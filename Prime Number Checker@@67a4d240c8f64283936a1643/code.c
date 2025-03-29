#include<stdio.h>
int isprime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2; i*i<=num;i++){
        if(num%2==0);
        return 0;
    }
    return 1;
}
int main(){
    int num;
    scanf("%d", &num);
    isprime(num);
    return 0;
}