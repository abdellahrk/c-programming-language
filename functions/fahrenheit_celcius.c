#include <stdio.h>

void temperature(float lower, float upper, float step);

int main() {
    temperature(0, 300, 20);
    return 0;
}

void temperature(float lower, float upper, float step) 
{
    float fahr, celcius;

    fahr = lower;

    for (fahr = 0; fahr <= upper; fahr = fahr + step)
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    
}