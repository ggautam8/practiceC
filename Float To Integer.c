#include<stdio.h>

void roundUp(float);
void roundDown(float);

int main(){
       float num;
       int round;

       printf("Select one of the option:\n");
       printf("1. Round Up\n");
       printf("2. Round Down\n");
       scanf("%d",&round);

       if(round == 1){
           printf("Enter the number to be rounded up:");
           scanf("%f",&num);
           roundUp(num);
       }
       if(round == 2){
           printf("Enter the number to be rounded down:");
           scanf("%f",&num);
           roundDown(num);
       }

}

void roundUp(float num){
     num = num + 0.999999999;
     int y = (int)num;
     printf("%d",y);
}

void roundDown(float num){
     int x = (int)num;
     printf("%d",x);
}