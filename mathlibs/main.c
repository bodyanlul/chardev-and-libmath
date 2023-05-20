#include <stdio.h>

float square(float number);
float square_root(float number);

int main() {
    float number = 4;
    float result_square = square(number);
    float result_sqrt = square_root(number);

    printf("Square of %f: %f\n", number, result_square);
    printf("Square root of %f: %f\n", number, result_sqrt);

    return 0;
}