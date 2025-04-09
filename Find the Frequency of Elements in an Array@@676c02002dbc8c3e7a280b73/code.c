#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[n];
    int visited = -1;

    // input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = 0;
    }

    // frequency count
    for (int i = 0; i < n; i++) {
        if (freq[i] == visited)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = visited;
            }
        }
        freq[i] = count;
    }

    // output
    for (int i = 0; i < n; i++) {
        if (freq[i] != visited) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
