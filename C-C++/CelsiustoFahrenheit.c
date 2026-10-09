#include <stdio.h>

int main(){
    float Celsius, Fahrenheit;

    printf("Enter Celsius:\n");
    scanf("%f", &Celsius);   
    
    Fahrenheit = (9.0/5.0)*Celsius+32;
    
    printf("The Celsius %.2f into Fahrenheit is %.2f", Celsius, Fahrenheit);

    return 0;
}