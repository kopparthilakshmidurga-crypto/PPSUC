#include <stdio.h>

int main() {
    int N, A, B;

    // Read inputs
    scanf("%d %d %d", &N, &A, &B);

    // Print multiplication table from A to B
    for (int i = A; i <= B; i++) {
        printf("%d x %d = %d", N, i, N * i);
    }

    return 0;
}

