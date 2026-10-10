#include <stdio.h>

int main(){
    int r;
    printf("Enter Radius:");
    scanf("%d", &r);
    
    printf("The area of circle of radius %d is %f\n", r, 3.14*r*r);
    
    return 0;
}