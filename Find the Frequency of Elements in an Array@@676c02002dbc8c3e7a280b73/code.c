#include<stdio.h>
int main(){
    int n, freq = 0;
    scanf("%d",&n);
    int arr[n],freq[n];
    scanf("%d",&arr[n]);
    freq[i] = -1;
    for(int i =0; i<n; i++){
        if(freq[i] != -1){
            continue;
        }
        cont = 1;
        for(j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++
                freq[j] = 0;
            }
        }
        freq[i] = count;
    }
    for(i = 0; i<n; i++){
        if(freq[i]>0){
            printf("%d\n",arr[i],freq[i]);
        }
    }
    return 0;
}