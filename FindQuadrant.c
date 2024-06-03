#include<stdio.h>

int findQuadrant(double x, double y);

int main(){
    double x, y;
    int quadrant;

     printf("X coordinate:");
     scanf("%lf",&x);
     printf("Y coordinate:");
     scanf("%lf",&y);

     quadrant = findQuadrant(x, y);

     printf("(%.2lf, %.2lf) belongs to quadrant %d ", x, y, quadrant);

     return 0;
}

int findQuadrant(double x, double y){
    int q;
    if(x > 0 && y > 0){
         q = 1;
    }
    else if(x < 0 && y > 0){
         q = 2;
    }
    else if(x < 0 && y < 0){
         q = 3;
    }
    else if(x > 0 && y < 0){
         q = 4;
    }
    return q;
}