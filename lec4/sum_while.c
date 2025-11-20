//finding sum of given number
#include <stdio.h>

int main(){

    int num=5634;
    int sum=0;
    while (num>0)
    { int lastDigit=num%10;
       sum=sum+lastDigit;
       num=num/10;
          
    }
    printf("Sum of given number is: %d",sum);
}