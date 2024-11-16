#include <stdio.h>

int main() {

    int nls, bks, tbs, c;

    nls = bks = tbs = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nls;
        if (c == ' ')
            ++bks;
        if (c == '\t')
            ++tbs;
    }

    printf("Character counts\n Tabs: %3d\n Blanks: %3d\n Newlines: %3d\n", tbs, bks, nls);

    return 0;
}