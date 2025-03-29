#include<stdio.h>
int main(){
    int n,arr[10];
    scanf("%d",&n)
    for(int i=0;i<n;i++){
        printf("%d", &arr[i]);
    }
    int min = a[0], max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d %d\n",min,max);
    return 0;
}