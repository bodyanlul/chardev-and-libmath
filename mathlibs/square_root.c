float square_root(float number) {
    if (number < 0) {
        return -1;  // esli chislo negative
    }

    float guess = number;
    float epsilon = 0.00001;

    while ((guess * guess - number) > epsilon) {
        guess = (guess + number / guess) / 2;
    }

    return guess;
}