#include<stdio.h>
void input (int &a, int &b);
void output (int a, int b);
void swapValue (int a, int b);
int main(){
    int a,b;
    input(a,b);
    output (a,b);
    swapValue(a,b);
}
void input (int &a, int &b){
    printf("enter the frist number: ");
    scanf("%d", &a);
    printf("\nenter the second number: ");
    scanf("%d", &b);
}
void output (int a, int b){
    printf("\nbefore swap value: %d %d", a, b);
}
void swapValue (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nafter swap value: %d %d", a, b);
}