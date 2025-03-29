#include<stdio.h>
int main(){
    int n, eve = 0, od = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n ; i++){
        if(arr[i] % 2 == 0){
            eve = eve+1;
        }
        else{
            od = od+1;
        }
    }
    printf("%d %d ", eve, od);
    return 0;
}