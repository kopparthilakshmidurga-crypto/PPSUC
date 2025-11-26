#include <stdio.h>

int main() {
    int radius;
    float area, perimeter;
    const float pi = 3.14;

    // Read radius
    scanf("%d", &radius);

    // Calculate area and perimeter
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    // Print results with 2 decimal places
    printf("%.2f%.2f", area, perimeter);

    return 0;
}

