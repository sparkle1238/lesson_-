/*
вам даны 2 часла a,b верните сумму этих чисел


Пример 1:
Input: 1 2
Output: 3

Пример 2:
Input: 11 123
Output: 134

Пример 3:
Input: 0 0
Output: 0

*/

#include <stdio.h>


int sum(int, int);

//   https://leetcode.com/problems/add-two-integers/description/

int main(){
  int x=10,y=10;

  int k = sum(  x  ,  y   );

  printf("%d",k);
  
  return 0 ;
}


int sum(int a, int b){
  return a+b;
}
