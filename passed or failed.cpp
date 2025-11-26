#include <stdio.h>

int main() {
    int english, maths, physics, chemistry, cs;

    // Read marks for 5 subjects
    scanf("%d %d %d %d %d", &english, &maths, &physics, &chemistry, &cs);

    // Check if marks in all subjects are greater than 34
    if (english > 34 && maths > 34 && physics > 34 && chemistry > 34 && cs > 34) {
        printf("PASSED");
    } else {
        printf("FAILED");
    }

    return 0;
}

