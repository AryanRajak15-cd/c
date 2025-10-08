#include<stdio.h>

float calcpercent(float hin, float eng, float sci, float maths, float sst, float comp)
{
    printf("REMEMBER ALL MARKS ARE OUT OF 100\n");
    printf("Enter marks of hindi:");
    scanf("%f",&hin);
    printf("Enter marks of english:");
    scanf("%f",&eng);
    printf("Enter marks of science:");
    scanf("%f",&sci);
    printf("Enter marks of mathematics:");
    scanf("%f",&maths);
    printf("Enter marks of social studies:");
    scanf("%f",&sst);
    printf("Enter marks of computer:");
    scanf("%f",&comp);
    float totalmarks=600;
    float summarks= hin+eng+sci+maths+sst+comp;
    float percentage=(summarks/totalmarks)*100;
    printf("FINAL RESULT: %f",percentage);
}

int main()
{
    float a, b, c, d, e, f;
    calcpercent(a, b, c, d, e, f);
}