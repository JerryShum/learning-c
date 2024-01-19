#include <stdio.h>

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("\n\e[1mCelsius to Fahrenheit Conversion Table \e[m\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.01f\n", fahr, celsius);
        fahr = fahr + step;
    }
}