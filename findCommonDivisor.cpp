#include<stdio.h>
// find common of divisor of 2 numbers for user 
//declare function
void input (int &number1, int &number2);
void output (int number1 , int number2);
void findCommonDivisor (int number1, int number2);
int main(){
    int number1,number2;
    input(number1, number2);
    output(number1, number2);
    findCommonDivisor ( number1,number2);
}
void input (int &number1, int &number2){
    printf ("enter number 1: ");
    scanf("%d", &number1);
    printf("\nenter the number 2: ");
    scanf("%d", &number2);
}
void output (int number1 , int number2){
    printf("your numbers is here: %d %d ", number1, number2);
}
void findCommonDivisor (int number1, int number2){
    printf("\nCommonDivisor is here ");
    if ( number1 > number2){
        for (int i = 1; i <= number2; i++){
            if (number1 % i == 0 && number2 % i == 0){
                printf("%4d", i);
            }
        }
    } else {
        for (int i = 1; i <= number1; i++){
            if (number1 % i == 0 && number2 % i == 0){
                printf(" %4d", i);
            }
        }
    }
}