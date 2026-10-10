#include <stdio.h>

int main()
{
    float marks1, marks2, marks3;
    float total, percent;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &marks3);

    if (marks1 < 0 || marks1 > 100 ||
        marks2 < 0 || marks2 > 100 ||
        marks3 < 0 || marks3 > 100)
    {
        printf("Invalid marks!");
        return 0;
    }

    total = marks1 + marks2 + marks3;
    percent = (total / 300) * 100;

    printf("\n----- RESULT -----\n");
    printf("Subject 1: %.2f%%\n", marks1);
    printf("Subject 2: %.2f%%\n", marks2);
    printf("Subject 3: %.2f%%\n", marks3);
    printf("Total Marks: %.2f / 300\n", total);
    printf("Percentage: %.2f%%\n", percent);

    if (percent >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    if (percent >= 90)
        printf("Grade: A\n");
    else if (percent >= 80)
        printf("Grade: B\n");
    else if (percent >= 70)
        printf("Grade: C\n");
    else if (percent >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}