#include <stdio.h>

#define MIN     0
#define MAX     300
#define STEP    20

int main() {

    int cels;
    float fahr;

    for (cels = MIN; cels <= MAX; cels += STEP) {
        fahr = (cels * (9.0/5.0)) + 32;

        printf("%3d %6.1f\n", cels, fahr);
    }
        

    return 0;
}