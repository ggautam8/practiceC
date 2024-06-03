#include<stdio.h>

int GauSum(int num);

int main(){
    int sum, num;

     printf("Enter a number till when you want to calculate the sum:");
     scanf("%d",&num);

     sum = GauSum(num);

     printf("Gaussian Sum: %d",sum);
    return 0;
}

int GauSum(int num){
    int s;
    s = (num * (num + 1))/2 ;
    return s;
}