#include <stdio.h>

int main() {
    long nc;
    nc = 0;

    while (getchar() != EOF)
        ++nc;
    printf("Number of chars: %ld\n", nc);
    return 0;
}