#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159;
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area: %.2f\n", area);

    return 0;
}
