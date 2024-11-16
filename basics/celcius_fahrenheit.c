#include <stdio.h>

int main() {

    float celcius, fahr;
    float lower = 0;
    float upper = 300;
    float step = 20;

    celcius = lower;

    while (celcius <= upper)
    {
        fahr = celcius * (9/5) + 32;
        printf("%3.0f\t%4.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
    

    return 0;
}