#include <stdio.h>

int main() {
    // declare variables
    char grade;
    char name[20];
    int age;
    float marks;
    double pi;
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your marks: ");
    scanf("%.f", &marks);

    printf("Enter the value of pi: ");
    scanf("%lf", &pi);

    // print the values
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Marks: %f\n", marks);
    printf("Pi: %lf\n", pi);

    return 0;
    
}