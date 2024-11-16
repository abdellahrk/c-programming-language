#include <stdio.h>

int main () {

    int word;

    printf("Enter your words and press exit when done\n");
    while ((word = getchar()) != EOF) {
        if (word == ' ') printf("\n");
        printf("%c", word);
    }

    return 0;
}