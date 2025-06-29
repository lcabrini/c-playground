#include <stdio.h>
#include <libgen.h>

int main(int argc, char **argv) {
    printf("Program name: %s\n", basename(argv[0]));

    for (int i = 1; i < argc; ++i) {
        printf("%2d. %s\n", i, argv[i]);
    }

    return 0;
}