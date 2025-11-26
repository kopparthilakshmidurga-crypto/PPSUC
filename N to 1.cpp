#include <stdio.h>

int main() {
    int N;

    // Read the number
    scanf("%d", &N);

    // Print from N to 1
    for (int i = N; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}

