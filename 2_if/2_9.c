/*
Техническое поражение собаки


Условие
С клавиатуры вводятся 4 целых числа – номера пёсиков-участников.

Все пудели имеют в номере на позиции десятков цифру 7 или 8. 

Найдите минимальный номер, принадлежащий пуделю. Если среди собак нет ни одного пуделя, то напечатайте фразу "Пудели не явились". 

входные данные	         выходные данные
123 345 176 384          176
----------------------------------
271 489 372 673          271



*/

#include<stdio.h>

int main(){
int a,b,c,d,min=999;

scanf("%d%d%d%d",&a,&b,&c,&d);

  
if((a/10%10==7 || a/10%10==8) && a<min){
min=a;
}
if((b/10%10==7 || b/10%10==8) && b<min){
  min=b;
}
if((c/10%10==7 || c/10%10==8) && c<min){
  min=c;
}  
if((d/10%10==7 || d/10%10==8) && d<min){
  min=d;
}
  printf("%d",min);

  return 0;
}


