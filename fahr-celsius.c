#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;
    upper = 1000;
    step = 5;
    scanf("%f", &celsius);
    while (celsius <= upper) {
        fahr = ((celsius * 9.0/5.0) + 32.0);
        printf("%6.1f %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
