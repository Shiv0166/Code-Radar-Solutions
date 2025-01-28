#include <stdio.h>
int main() {
    int day;
    scanf("%d", &day);
    switch(day) {
        case1: printf("Monday\n");
        break;
        case2: printf("Tuesday\n");
        break;
        case3: printf("Wednesday\n");
        break;
        case4: printf("Thursday\n");
        break;
        case5: printf("Friday\n");
        break;
        case6: printf("Saturday\n");
        break;
        case7: printf("Sunday\n");
        break;
        default: printf("Invalid");     
    }
    return 0;
}