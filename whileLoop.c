// create yhe table using while loop

#include<stdio.h>

int main() {

    int number;
   printf("ENTER THE NUMBER : ");
   scanf("%d", &number);


   int count =1;

   while (count <=10)
   {
      int product = number * count;
      printf("%d\n", product);
      count = count +1;
   }
   return 0;
}