#include <stdio.h>

int main(){
    int age;

    printf("Enter Age:\n");
    scanf("%d", &age);

    if(age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>40){
        printf("You can drive and you are a elder");
    }
    else if(age>=18){
        printf("You can drive");
    }
    else{
        printf("You are not eligible to drive");
    }

    return 0;
}