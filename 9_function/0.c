/*
написать функцию swap которое меняет местами значения двух переменных

входные данные           выходные данные
5 7                       7 5

10 20                     20 10

*/

#include<stdio.h>

void swap(int*,int*);

int main(){
  int x=5;
  int y=10;


  swap(&x,&y);

  
  printf("x = %d  y = %d",x,y);
    return 0;
}

void swap(int* g , int* w){
int temp;
  temp=*g;
  *g=*w;
  *w=temp;
}


  