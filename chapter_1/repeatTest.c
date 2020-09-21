#include <stdio.h>

int main() {

    int c;
    char name[100];

    for (int pos = 0; (c = getchar()) != '\n'; ++pos)
        name[pos] = c;

    printf("Hello %s.\n\n", name);

    return 0;
}