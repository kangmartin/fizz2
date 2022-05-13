#include <stdio.h>
#include <stdlib.h>

#define FIZZ "Fizz2 dev dev"
#define BUZZ "Buzz"

int main (void) {
    for (int i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf ("%s%s\n", FIZZ, BUZZ);
        } else if (i % 3 == 0) {
            printf ("%s\n", FIZZ);
        } else if (i % 5 == 0) {
            printf ("%s\n", BUZZ);
        } else {
            printf ("%d\n", i);
        }
    }
    printf("non");
    return EXIT_SUCCESS;
}

