#include <stdio.h>

int main(){
    int r = 6;
    int h = 9;
    printf("The area of circle of radius %d is %f\n", r, 3.14*r*r);
    printf("The volume of cylinder of radius %d and height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}