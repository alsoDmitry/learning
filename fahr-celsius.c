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
// через for 
/*
#include <stdio.h>
int main(void) {
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr +20.0) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}*/
