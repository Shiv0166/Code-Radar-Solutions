#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max1 = 0, max 2 =0;
    for(int i = 0; i<n ; i++){
        if(arr[i]>max1){
            max2 = max1;
            printf("%d",max2);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}