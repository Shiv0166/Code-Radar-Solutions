#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int visited = -1;
    int arr[n], freq[n];

    // Input and initialize
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = 0;
    }

    // Count frequency
    for(int i = 0; i < n; i++) {
        if(freq[i] == visited)
            continue;

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = visited;
            }
        }
        freq[i] = count;
    }

    // Find max frequency and count how many elements have it
    int maxFreq = -1;
    for(int i = 0; i < n; i++) {
        if(freq[i] != visited && freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    int countMax = 0;
    int maxElement = -1;
    for(int i = 0; i < n; i++) {
        if(freq[i] == maxFreq) {
            countMax++;
            maxElement = arr[i]; // overwrite, but will use only if countMax == 1
        }
    }

    if(countMax == 1)
        printf("%d\n", maxElement);
    else
        printf("-1\n");

    return 0;
}
