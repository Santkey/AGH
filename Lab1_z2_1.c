#include <stdio.h>

int main()
{
    float val1, val2, val3, sum;

    val1 = 20.1;
    val2 = 10.2;
    val3 = 5.3;
    sum = val1 + val2 + val3;
    printf("Suma %.3f i %.3f i %.3f to %.3f\n", val1, val2, val3, sum);
    printf("Iloczyn %.3f i %.3f i %.3f to %.3f\n", val1, val2, val3, val1*val2*val3);
    return 0;
}
