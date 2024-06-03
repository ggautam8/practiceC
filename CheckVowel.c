#include<stdio.h>

void checkVowel(char letter);

int main(){
    char letter;

     printf("Enter a character:");
     scanf("%c",&letter);

     checkVowel(letter);

     printf("%c is a consonant",letter);

}

void checkVowel(char letter){
    char arr[10] = {'A','a','E','e','I','i','O','o','U','u'};

    for(int i = 0; i < 10; i++){
        if(letter == arr[i]){
            printf("%c is a vowel",letter);
        }
    }

}