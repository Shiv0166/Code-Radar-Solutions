#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max1 = int_min, max2 =int_min;
    for(int i = 0; i<n ; i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
    if(max2 == intmin1){
        printf("-2\n");
    }else{
        printf("%d\n",max2);
    }
    return 0;
}