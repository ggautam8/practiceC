#include<stdio.h>
#include<ctype.h>

void checkSpace(char space);

int main(){
    char space;
     printf("Press space:");
     scanf("%c",&space);

     checkSpace(space);
}

void checkSpace(char space){
    if(space == 32){
        printf("You pressed space");
    }
    else{
        printf("Wrong input");
    }
}