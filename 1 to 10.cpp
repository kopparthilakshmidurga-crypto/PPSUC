#include <stdio.h>

int main() {
    // Loop from 1 to 10
    for(int i = 1; i <= 10; i++) {
        printf("%d", i);
        if(i != 10) {
            printf(" "); // Print space between numbers
        }
    }
    printf(""); // Newline at the end
    return 0;
}
