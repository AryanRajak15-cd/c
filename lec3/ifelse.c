#include<stdio.h>
int main(){
    int age;
    printf("Driving eligibility check \n");
    printf("enter age :");
    scanf("%d",&age);



    if (age>=18){

        printf("Adult \n");
        printf("You can drive \n");
    }
    else {

        printf("You are not eligible for driving");
    }

    return 0;
}