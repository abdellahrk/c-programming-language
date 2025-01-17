/*
This uses the for loop to convert fahrenheit to celciue
*/
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    float fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        
    return 0;
}