/*
1.5 Подделка

Условие
Макар купил ноутбук с названием "Компуктер 3000". Помогите Макару определить, подделка это или оригинал.

С клавиатуры вводятся характеристики ноутбука:

вес (вещественное число, в кг),
количество кнопок на клавиатуре (целое число),
диагональ экрана (целое число, в см).
Если ноутбук является оригинальным, то вес должен быть не менее 1 и не более 1.5 кг, на клавиатуре 55 кнопок, диагональ экрана минимум 30 и максимум 32 см.

Если хотя бы один параметр не соответствует, то это подделка.

Напишите программу, которая выводит на экран "Оригинал", если ноутбук соответствует критериям, и "Подделка", если не соответствует.


Примеры
входные данные	выходные данные
1.3
55
31                   Оригинал
----------------------------------

2.4
55
32                  Подделка


*/

#include <stdio.h>

int main(){
float a;
int b,c;

scanf("%f%d%d",&a,&b,&c); 

if((a<=1.0 || a>=1.5) && (b>55 || b<55) && (c>=30 || c<=32)){
  printf("Оригинал");
}
else
  printf("Подделка");

  return 0;
}