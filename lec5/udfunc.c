#include<stdio.h>
int sum(int a , int b)      //user defined function//
{
    int tsum =a+b;
    // return tsum;
    printf("Sum of %d and %d: %d\n",a,b,tsum);
}
void Table(int n){             //user defined function//8
    
    printf("Table of %d :\n",n);
    for (int i =1;i<=10;i++){
        printf("%d \n",i*n);
    }
}

int main()
{
    int i,j;
    printf("Enter  number :  ");
    scanf("%d",&i);
    printf("Enter  number :  ");
    scanf("%d",&j);
    sum(i,j);
    
    Table(i); 
    Table(j);  

    
}


