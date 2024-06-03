#include<stdio.h>

void checkPrime(int num);

int main(){

    int num;
     printf("Enter a number:");
     scanf("%d", &num);

     checkPrime(num);

    return 0;
}

void checkPrime(int num){
    int check;
    if (num == 0 || num == 1){
        printf("neither prime nor composite");
    }
    else {
        for (int i = 2; i <= num / 2; i++) {

            if (num % i == 0) {
                check = 1;
                break;
            }
        }

        if (check == 0)
            printf("%d is a prime number", num);
        else
            printf("%d is a composite number", num);
    }
}