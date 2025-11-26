#include <stdio.h>

int main() {
    int N, sum = 0;

    // Read the value of N
    scanf("%d", &N);

    // Calculate sum of first N natural numbers
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Print the sum
    printf("%d", sum);

    return 0;
}

