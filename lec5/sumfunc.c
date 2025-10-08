#include<stdio.h>
int sum(int i , int j)
{
    return i+j;
}
int square(int a)
{
    int sqr=a*a;
    printf("Square of %d: %d\n",a,sqr);
}

int main()
{
    int i ;
    printf("Enter first number :");
    scanf("%d",&i);
    int j;
    printf("Enter second number :");
    scanf("%d",&j);

    int s = sum(i,j);                             //calling sum function
    printf("Sum of %d and %d: %d \n",i,j,s);


    square(i);                        // calling square function
    square(j);
    return 0;
}

