#include<stdio.h>

void checkLeapYear(int year);

int main(){
    int year;

     printf("Enter any year:");
     scanf("%d",&year);
     checkLeapYear(year);
}

void checkLeapYear(int year){

    if(year % 100 == 0 && year % 400 != 0){
        printf("%d is not a leap year",year);
    }
    else if(year % 4 == 0){
        printf("%d is a leap year",year);
    }
}