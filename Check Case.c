#include<stdio.h>
#include<ctype.h>

void checkCase(char ch);

int main() {
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);

    checkCase(ch);
}

void checkCase(char ch){
    if(isupper(ch)){
        printf("%c is in uppercase", ch);
    }
    else if(islower(ch)){
        printf("%c is in lowercase", ch);
    }
}