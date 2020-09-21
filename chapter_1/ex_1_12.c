#include <stdio.h>

int main() {
    int c;
    while (c != EOF) {
        c = getchar();
        if (c == '\n' || c == ' ')
            printf("\n");
        else
            putchar(c);
    }
    return 0;
}
