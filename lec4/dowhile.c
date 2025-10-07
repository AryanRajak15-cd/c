#include<stdio.h>
int main(){


    int i;
      do {

        printf("Enter a number : ");
        scanf("%d",&i);
        printf("%d \n",i);
        if (i % 5 == 0)
        {
            break;
        }

    } while (1);
    printf("the end!!!!");
return 0;
}

