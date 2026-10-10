#include <stdio.h>

int main()
{
    float basic, hra, da, total;
    printf("Enter Salary:\n");
    scanf("%d", &basic);
    hra = basic * 20 / 100;
    da = basic * 150 / 100;
    total = basic + hra + da;
    printf("Total Salary is: %.2f\n", total);  
    return 0;
}