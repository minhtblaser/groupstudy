#include <stdio.h>
#include <math.h>
void enterNumbers (int &n); 
void outputNumbers (int n);
void digitOfEvenNumbers (int n);
void digitOfOddNumbers (int n);
void digitOfPrimeNumbers (int n);
void squareNumber(int n);
int isPrimeNumber(int n);
int isSquareNumber (int n);
void digitOfReverseNumber(int n);
bool isReverseNumber(int n);
void reserveNumber(int n);
void listPerfectNumbers(int n);
bool checkPerfectNumbers (int n);
void numbersInFibo(int n);
bool checkNumbersInFibo(int n);

int main (){
    int n;
    //ennter number in array
    enterNumbers(n);
    //output numbers;
    // theDigitOfNumbers
    // digitOfEvenNumbers(n);
    // digitOfOddNumbers (n);
    // digitOfPrimeNumbers (n);
    // squareNumber (n);
    reserveNumber(n);
    listPerfectNumbers(n);
    numbersInFibo(n);
    return 0;
}
void enterNumbers (int &n) {
    printf("enter numbers: ");
    scanf("%d", &n);
}
void outputNumbers(int n){
    printf(" \nLIST OF NUMBERS: ");
    for (int i = 1; i <= n; i++){
            printf("%d ",i); 
    }  
}
void digitOfEvenNumbers(int n){
    printf("\n list of even numbers: ");
     for (int i = 1; i <= n; i++){
            if (i % 2 == 0){
                printf("%d ", i);
        }
    } 
}
void digitOfOddNumbers (int n){
    printf("\n list of odd numbers: ");
     for (int i = 1; i <= n; i++){
            if (i % 2 == 1){
                printf("%d ", i);
        }
    } 
}
int isPrimeNumber(int n){
    int isprimenumber = 1;
    for (int i =2; i < n; i++){
        if (n % i == 0){
            isprimenumber = 0;
            break;
        }
    }
    return isprimenumber ;
}

void digitOfPrimeNumbers (int n){
     for (int i = 2; i <= n; i++){
            if (isPrimeNumber(i)){
                printf(" %d ", i);
        }
    } 
}
void squareNumber(int n){
    for (int i = 1; i <= n; i++){
        if (isSquareNumber(i)){
            printf("%d", i);
        }
    }
}

int isSquareNumber(int n){
    return sqrt(n) == (int)sqrt(n);
}

bool isReverseNumber (int n){
    int isreversenumber=true;
    int reversenumber = 0;
	int number;
	int temp=n;
	while(temp!=0){
	    number=temp%10;
		reversenumber= reversenumber*10+number;
		temp/=10;
	}
	return  reversenumber == n;
}
void reserveNumber(int n){
    printf("\nlist of reserve number: ");
    for (int i = 1; i <= n; i++){
    if(isReverseNumber(i)){
        printf("%4d", i);
        }
    }
}

bool checkPerfectNumbers (int n){
    bool perfectNumber = true;
    int sum = 0;
    for(int i=1;i < n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum==n;
}
void listPerfectNumbers(int n){
    printf("\nList of perfectNumbers: ");
    for (int i = 1; i<n; i++)
    {
        if(checkPerfectNumbers(i)){
            printf("%d ",i);
        }
    }  
}

bool checkNumbersInFibo(int n){
int numberinfibo = false;
    int letter[100];
    letter[0] = 1,letter[1] =1;
    if(n==letter[0] ||n ==letter[1]){
        numberinfibo = true;
    }
    else{
        for(int i=2;i<n;i++){
            letter[i]= letter[i-2]+letter[i-1];
            if(n==letter[i]){
                numberinfibo = true;
                break;
            }
        }
    }
    return numberinfibo;
}
void numbersInFibo (int n){
       printf("\nList numbers of fibonacci: ");
    for (int i = 1; i<n; i++)
    {
        if(checkNumbersInFibo(i)){
            printf("%d ",i);
        }
    }  
}