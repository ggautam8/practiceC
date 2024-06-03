#include<stdio.h>

int roundUp(float);
int roundDown(float);

int main(){
       float num;
       int round;

       printf("Select one of the option:\n");
       printf("1. Round Up\n");
       printf("2. Round Down\n");
       scanf("%d",&round);

       if(round == 1){
           printf("Enter the number to be rounded up:");
           scanf("%f",num);
           roundUp(num);
       }
       if(round == 2){
           printf("Enter the number to be rounded down:");
           scanf("%f",num);
           roundDown(num);
       }

}

int roundUp(float num){

}

int roundDown(float num){

}