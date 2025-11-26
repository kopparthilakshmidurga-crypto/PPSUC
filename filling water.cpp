#include <stdio.h>

int main() {
    int B1, B2, B3;
    scanf("%d %d %d", &B1, &B2, &B3);

    int empty = 0;
    if(B1 == 0) empty++;
    if(B2 == 0) empty++;
    if(B3 == 0) empty++;

    if(empty >= 2) {
        printf("Water filling time");
    } else {
        printf("Not now");
    }

    return 0;
}

