/*

написать функцию abs которая вернет модуль числа

входные данные           выходные данные
5                       5

-5                      5


*/

#include<stdio.h>
#include "1_0.h"


int main(){
  int c;
  int a = 10;
  c = abs(a);  
  printf("%d",c);
  
}

int abs(int h){
  
  if(h<0){
    h=h*-1;
  }
  
  return h;
}


