/*
Номера палиндромы

Условие
С клавиатуры вводятся 3 целых трехзначных числа. 

Посчитайте количество чисел палиндромов среди этих трёх.

Палиндром – симметричное число (Например, 323, 717, 464).

входные данные	выходные данные
131 456 787      2
---------------------------------
636 569 123      1


*/

#include<stdio.h>

int main(){
int a,b,c, count=0;
scanf("%d%d%d",&a,&b,&c);
  
if(a/100%10==a%10){
  count++;
}  
if(b/100%10==b%10){
    count++;
}  
if(c/100%10==c%10){
    count++;
}  
  
printf("%d",count);
  return 0;
}