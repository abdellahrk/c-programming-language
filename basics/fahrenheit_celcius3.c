#include <stdio.h>
/*
An improved version which takes care of floating point numbers
Also print a heading
 */
int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("A degree conversion program\n==========================\n");
    while (fahr <= upper) {
        celcius = (5.0 /9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}