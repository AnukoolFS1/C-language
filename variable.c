#include <stdio.h>

int main() {

    int age = 25; // Integer variable
    float price = 10.99; // Float variable
    char grade = 'A'; // Character variable (use single quotes)
    double pi = 3.14159265; // Double precision variable
    _Bool isStudent = 1; // Boolean variable

    printf("Age: %d\n", age);
    printf("Price: %.2f\n", price);
    printf("grade: %c\n", grade);
    printf("Pi: %.8lf\n", pi);
    printf("isStudent: %d\n", isStudent);

    return 0;
}