/*
Условие
Дано целое число n. Требуется найти количество четных цифр отличных от нуля в записи этого числа.

Формат входных данных
На вход программе подается одно целое неотрицательное число n(n≤231−1).

Формат выходных данных
Требуется вывести одно целое число — ответ на задачу.


входные данные	выходные данные
13                0
--------------------------------
42222             5

*/

#include <stdio.h>

int main(){
int n,count=0;
scanf("%d",&n);

while(n>0){
  if( n % 2 == 0 ){
    count++;
  }
  n=n/10;
}  
printf("%d ",count); 

  return 0;
}