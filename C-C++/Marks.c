#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, total;
    float percent;

    printf("Enter marks1: ");
    scanf("%d", &marks1);
    printf("Enter marks2: ");
    scanf("%d", &marks2);
    printf("Enter marks3: ");
    scanf("%d", &marks3);

    if(marks1 < 0 || marks1 >100 || marks2 < 0 || marks2 >100 || marks3 < 0 || marks3 >100)
    {
        printf("Invalid Marks");
        return 0;
    }

    total = marks1 + marks2 + marks3;
    percent = (total) / 3;

    printf("Total Marks: %d / 300\n", total);
    printf("Percentage: %.2f\n", percent);


    if(percent >= 40 && marks1 >=33 && marks2 >=33 && marks3 >=33)
        printf("Pass!");
    else
        printf("Fail!");
    return 0;
}