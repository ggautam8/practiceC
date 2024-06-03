#include<stdio.h>

void checkDiv(int num, int div[], int numDiv);

int main(){
    int num, numDiv;

     printf("Enter the integer to be checked:");
     scanf("%d",&num);
     printf("Enter the number of divisors:");
     scanf("%d",&numDiv);

     int div[numDiv];
     printf("Enter the divisors:");

    for(int i = 0; i < numDiv; i++){
        scanf("%d",&div[i]);
    }
    checkDiv(num, div, numDiv);
}

void checkDiv(int num, int div[], int numDiv){
    for(int i = 0; i < numDiv; i++){
        if(num % div[i] == 0){
            printf("%d is divisible by %d\n",num, div[i]);
        }
    }

}
