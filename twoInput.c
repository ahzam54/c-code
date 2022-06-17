#include <stdio.h>

int main() {

    double number;
    char letter;

    printf("Enter input : ");
    scanf("%lf %c", &number,&letter);

    printf("double input : %lf",number);
    printf("\nletter input : %c",letter);

    return 0;
}