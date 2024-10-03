/*
Дано целое число X , вернуть X с перевернутыми цифрами. 

Пример 1:
Input: x = 123
Output: 321

Пример 2:
Input: x = -123
Output: -321

Пример 3:
Input: x = 120
Output: 21

*/


#include <stdio.h>

int reverse(int x);

int main(){
  int x = 312;

  printf("%d",reverse(x));

  return 0;
} 


int reverse(int x){
  int flag=0,y=0;
  
   if(x<0){
     x=x*-1;
     flag=1;
   }
  
  while(x!=0){
    y=x%10 + y*10;
    x=x/10;
  }
  
  if(flag==1)
    y=y*-1;

  return y;
}

