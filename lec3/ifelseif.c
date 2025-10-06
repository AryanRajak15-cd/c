#include<stdio.h>
int main(){
int age;
    printf("Category check accordding to age14\n");
    printf("Enter your age:");
    scanf("%d",&age);

    if (age>=18){
        printf("You are an adult \n");
    }
    else  if (age> 13 && age<18 ){
        printf("You are a teenager \n");
    }
    else {

        printf("You are a child");
    }
}
   