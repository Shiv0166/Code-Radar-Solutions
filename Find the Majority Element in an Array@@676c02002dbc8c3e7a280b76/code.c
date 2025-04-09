#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int visited = -1;
    int arr[n], freq[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = 0;  
    }

    // Frequency counting
    for(int i = 0; i < n; i++) {
        if(freq[i] == visited) {
            continue; 
        }

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = visited; 
            }
        }

        freq[i] = count;
    }
    int maxfreq = -1;
    int maxelement = -1;

    for(int i = 0; i < n; i++) {
        if(freq[i] != visited && freq[i] > maxfreq) {
            maxfreq = freq[i];
            maxelement = arr[i];
        }
    }

    printf("%d\n", maxelement);

    return 0;
}
