/*
Условие
Напишите функцию void sort_three_numbers(int *a, int *b, int *c), которой передаются по указателям 3 различных числа, и она переупорядочивает их по возрастанию.

Формат входных данных
С клавиатуры вводятся три целых различных числа A, B и C, не превосходящих по модулю 100.

Формат выходных данных
Требуется вывести числа в порядке возрастания.

Примеры
входные данные	выходные данные
1 7 4            1 4 7

*/
#include <stdio.h>

void numswap(int *a, int *b);
void sort_three_numbers(int *a, int *b, int *c);

int main(){
  int a=1,b=7,c=-4;

  sort_three_numbers(&a,&b,&c);
  
  printf("%d%d%d",a,b,c); 
  return 0;
}

void numswap(int *a  , int *b){
int temp=0;
  temp=*a;
  *a=*b;
  *b=temp;
}


void sort_three_numbers(int *a, int *b, int *c){
  if(*a<*b){
    numswap( &(*a), &(*b));
  } 
  if(*a<*c){
    numswap(a, c);
  }  
  if(*b<*c){
    numswap(b, c);
  }
  
}
