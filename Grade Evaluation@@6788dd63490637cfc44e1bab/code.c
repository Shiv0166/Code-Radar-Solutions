#include <stdio.h>
int main() {
    char w;
    scanf("%c", &w);
    if(w == 'A') {
        printf("Excellent");
    }
    else if(w == 'B') {
        printf("Good");
    }
    else if(w == 'C') {
        printf("Average");
    }
    else if(w == 'D') {
        printf("Below Average");
    }
    else if(w == 'F') {
        printf("Fail");
    }
    else {
        printf("Invalid grade");
    }
    return 0;
}