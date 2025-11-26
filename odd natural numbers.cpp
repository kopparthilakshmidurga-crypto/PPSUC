#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i += 2) {  // Start from 1 and increment by 2
        printf("%d ", i);
    }
    printf("
");

    return 0;
}

