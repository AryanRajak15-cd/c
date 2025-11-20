//finding if given number is pirme or not
#include <stdio.h>
int main()
{
     int n ;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count=0;
    if (n <= 1)
            printf("It is not a prime number\n");

    for (int i=2; i<n; i++){

     if (n % i == 0)

         count++;
    }
    if (count>0)

            printf("It is not a prime number\n");

    else
            printf("It is a prime number");
        
}