#include <stdio.h>

int main() {

    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
    }

    printf("Number of lines is %d\n", nl);

    return 0;
}