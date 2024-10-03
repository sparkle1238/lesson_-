/*
написать  функцию для расчета суммы цифр натурального числа. Входной параметр – число. Возвращаемое значение – сумма.

входные данные      выходные данные 
123                 6

147                 13

*/

#include <stdio.h>

int sum_a(int );


int main(){
  int n, sum=0;
  scanf("%d",&n);
  sum = sum_a(n);
  printf("%d",sum);
  return 0;
}


int sum_a(int a){
  int sum=0;
  while(a!=0){
    sum+=a%10;
    a=a/10;
  }
  return sum;
}