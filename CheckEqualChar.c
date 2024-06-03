#include<stdio.h>

void checkChar(char ch1, char ch2);

int main(){
    char ch1,ch2;

     printf("Enter 2 characters:");
     scanf("%c%c",&ch1, &ch2);

    checkChar(ch1, ch2);
}

void checkChar(char ch1, char ch2){
     if(ch1 == ch2){
         printf("%c & %c are equal",ch1, ch2);
     }
     else{
         printf("%c & %c are not equal",ch1, ch2);
     }
}