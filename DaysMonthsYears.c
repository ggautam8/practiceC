#include<stdio.h>

int printYearMonthDays(int years, int months, int days);

int main(){
    int y, m, d;

     printYearMonthDays(y, m, d);

}

int printYearMonthDays(int years, int months, int days){

    printf("Enter the number of days:");
    scanf("%d",&days);

    years = days / 365 ;
    days = days - (365*years);
    months = days / 30;
    days = days - (30*months);

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)", years, months, days);
}
