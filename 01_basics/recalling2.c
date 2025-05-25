#include <stdio.h>

int main()
{
    int age = 25;
    short int Sibling = 2;
    long int WorldPopulation = 8000000000;
    int PINCODE = 1234;
    float marks = 87.50;
    double distanceToMoon = 384400.1230000;
    long double plankLength = 0.0000000000000000662;
    char grade = 'A';

    printf("Age = %d\n", age);
    printf("Sibling = %hd\n", Sibling);
    printf("Population of World = %ld\n", WorldPopulation);
    printf("Pincode = %d\n", PINCODE);
    printf("Marks = %.2f", marks);
    printf("Distance to moon = %.lf\n", distanceToMoon);
    printf("Length of a Plank = %.Lf\n", plankLength);
    printf("Grade = %c\n", grade);

    return 0;
}