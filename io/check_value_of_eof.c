#include <stdio.h>

int main() {
    int c;
    char value;
    value = ((c = getchar()) != EOF);
    printf("%i\n", value);

    return 0;
}