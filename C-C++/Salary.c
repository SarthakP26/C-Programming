#include <stdio.h>

int main()
{
    int salary, hra, da, gross, bonus=5000;
    printf("Enter Salary:\n");
    scanf("%d", &salary);
    hra = salary * 20 / 100;
    da = salary * 10 / 100;
    gross = salary + hra + da + bonus;
    printf("Gross Salary = %d\n", gross);    
    return 0;
}