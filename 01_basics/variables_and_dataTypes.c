#include <stdio.h>

int main() {
    int num = 1;
    float floatingPoint = 1.1;
    double PI = 3.1415926535;
    char character = 'A';
    char *characters1 = "ABC!@#123";
    char characters2[] = "ABC!@!123";
    _Bool boolean = 0;

    printf("Integer %d\n", num);
    printf("Floating values %.1f\n", floatingPoint);
    printf("Floating values upto the max digits after point %f\n", floatingPoint);
    printf("Double precision %f\n", PI);
    printf("Double precision upto the 2 digits after point %.2f\n", PI);
    printf("Character %c\n", character);
    printf("String %s\n", characters1);
    printf("Characters of an Array %s\n", characters2);
    printf("yet to have to study the difference between the array of characters and string.\n");
    printf("However, remember there is no built in string, boolean (before C99), undefined, null, NoneType.\n");
    printf("Boolean value %d\n", boolean);

    return 0;
}