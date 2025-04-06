#include <stdio.h>

int main () {
    // integers
    int integerVariable = 10;
    long int longInteger = 10000000000000000;
    // short int shortInteger = 1;
    unsigned int unsignedInteger = 5; // cannot be a negetive value

    // floating points
    float floatingVariable = 2.4;
    double doubleFloat = 3.1456789;
    long double veryLongFloat = 5.1233241341354431;

    // Character
    char charVariable = 'A';



    // outputs
    // printf(integerVariable);
    printf("integers %d\n", integerVariable);
    printf("long integer %ld\n", longInteger);
    // printf("short integer %sd", shortInteger);

    printf("float value %.2f\n",floatingVariable);
    printf("double precise value %.6lf\n", doubleFloat);
    printf("long double precise %.15Lf\n", veryLongFloat);

    printf("character %c\n", charVariable);

    return 0;
}