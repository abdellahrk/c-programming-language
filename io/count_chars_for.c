#include <stdio.h>

int main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc);
  
    printf("Number of chars is %.0f\n", nc);
    
    return 0;
}