#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    // if(a &(1<<31)){
        if(a>>31 & 1){
        printf("Set");
    } else{
        printf("Not Set");
    } return 0;
}