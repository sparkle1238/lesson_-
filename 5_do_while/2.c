/*
Условие
Супер звезда фильмов Мистер Вайл смотрит на свои чеки с гонорарами (заработная плата актёра). 

Дана последовательность положительных чисел, оканчивающаяся нулём. Помогите Мистеру Вайлу посчитать, сколько у него гонораров, превышающих $100000.


Формат входных данных
Последовательность целых чисел, каждое с новой строки, оканчивающаяся нулем. Гарантируется, что сами числа больше 0, но не больше 1000000, а количество чисел ≤100000 и больше 0.

Формат выходных данных
Одно число – количество больших гонораров.

входные данные	  выходные данные
15000000
2000
18000
180000
2000
0                  2
================================
4000
100000
3000000
4000
1200
800000
1600000
2000000
2000000
3000000
0                  6

*/

#include<stdio.h>

int main(){
int n,count=0;


do{
  scanf("%d",&n);
  if(n > 100000){
    count++; // <=> count = count + 1;
  }
  
}while(n!=0);
  printf("%d",count);



  
  return 0;

}