#include <stdio.h>

int main() {
    int N, M;
    float onlinePrice;

    // Read the costs of online and dining
    scanf("%d %d", &N, &M);

    // Apply 10% discount on online price
    onlinePrice = N - (0.10 * N);

    // Compare the prices
    if (onlinePrice < M)
        printf("ONLINE");
    else if (onlinePrice > M)
        printf("DINING");
    else
        printf("EITHER");

    return 0;
}
