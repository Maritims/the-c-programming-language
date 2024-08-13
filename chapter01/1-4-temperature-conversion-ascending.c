#include <stdio.h>

#define LOWER   0   // lower limit of table
#define UPPER   300 // upper limit
#define STEP    20  // step size

float celcius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

float fahrenheit(float celcius) {
    return (celcius / (5.0 / 9.0)) + 32.0;
}

int main() {
    printf("FAHRENHEIT\tCELCIUS\n");
    for(int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%10d\t%7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    printf("-----------------------\n");

    printf("CELCIUS\tFAHRENHEIT\n");
    for(int celcius = LOWER; celcius <= UPPER; celcius += STEP) {
        printf("%7d\t%10.1f\n", celcius, fahrenheit(celcius));
    }

    return 0;
}
