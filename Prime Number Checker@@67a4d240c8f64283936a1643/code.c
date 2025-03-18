#include<stdio.h>
int isprime(int n);
int main(){
    int n;
    scanf("%d",&n);
    if(isprime(n)){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
int isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i*i <=n; i++){
        if(n%2==0){
            return 0;
        } return 1;
    }
}