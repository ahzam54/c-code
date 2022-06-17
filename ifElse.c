#include<stdio.h>
int main() {

    double number;

    printf("Enter your number : ");
    scanf("%lf", &number);

    if (number < 0)
    {
        printf("negative number  %lf",number);
    }

   else if (number >= 1)
   {
        printf("positive number %lf",number);
    }

    else
    {
        printf("you enter zero %lf" ,number);
    }
    

    return 0;
    
     
}