#include<stdio.h>

int main(){
    enum week{Sun,Mon,Tues,Wed,Thur,Fri,Sat }day;

    for(int i = Sun; i < Sat; i++ ){
        printf("%d\n",i);
    }
}