/*
This uses the for loop to convert fahrenheit to celciue
*/
#include <stdio.h>

int main() {
    float fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        
    return 0;
}