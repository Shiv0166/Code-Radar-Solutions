// Your code here...
#include <stdio.h>
int prime(a){
    if(a==0 || a==1){
        return 0;
    }
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    prime(a)?{printf("Prime")}:printf("Not Prime");
}