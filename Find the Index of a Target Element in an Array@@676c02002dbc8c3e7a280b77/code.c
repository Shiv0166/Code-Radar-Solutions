#include<stdio.h>
int findindex(int arr[], int n, int target);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n ;i++){
        scanf("%d",&arr[n]);
    }
    int target;
    scanf("%d",&target);
    findindex(arr[], n, target);
    return 0;
}
int findindex(int arr[], int n, int target){
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}