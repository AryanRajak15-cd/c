#include<stdio.h>

int TotalPrice(float value){
    value=value+ (0.18*value);                 //+gst(18%)
    printf("Final price is (incl. GST): %f",value);
}

int main()
{
    float value ;
    printf("Enter the price:");
    scanf("%f",&value);
    printf("Product value is : %f \n",value);
    TotalPrice(value);
 return 0;
}
