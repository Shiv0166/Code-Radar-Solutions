#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max_even = -1;
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2 ==0){
            if(arr[i]>max_even){
                max_even = arr[i];
            }
        }
    }
    printf("%d",max_even);
    return 0;
}