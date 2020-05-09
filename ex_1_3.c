#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

char* header();

int main() {

    int fahr;

    printf("%s\n", header());
    
    for (fahr = MIN; fahr <= MAX; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

char* header() {
    return "Fahrenheit to Celsius";
}