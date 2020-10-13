#include <stdio.h>

int main()
{
    float val1, val2, val3, sum;

    printf("Podaj liczbe 1: ");
    scanf("%f", &val1);
    printf("Podaj liczbe 2: ");
    scanf("%f", &val2);
    printf("Podaj liczbe 3: ");
    scanf("%f", &val3);
    sum = val1 + val2 + val3;
    printf("Suma %.3f i %.3f i %.3f to %.3f\n", val1, val2, val3, sum);

    printf("Podaj liczby 1 i 2 i 3 oddzielone spacja: ");
    scanf("%.3f %.3f %.3f", &val1, &val2, &val3);
    sum = val1 + val2 + val3;
    printf("Suma %.3f i %.3f i %.3f to %.3f\n", val1, val2, val3, sum);

    return 0;
}
