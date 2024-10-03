/*
2.3Сцена для собак

Условие
На выставке собак производится взвешивание животных. С клавиатуры вводятся 5 вещественных чисел – это веса 5 собак (в кг).

В элитную секцию выставки возьмут только собак с весом менее 10 кг.

Найдите суммарный вес всех собак, которые попадут в элитную секцию, и проверьте, выдержит ли всех этих собак сцена грузоподъемностью 20 кг.

(Грузоподъемность 20 кг означает, что, если на такую сцену поместить собак весом хотя бы чуть-чуть больше 20 кг, она сломается).

Если сцена выдержит, выведите на экран: "Сцена стоит", иначе "Сцена сломалась".


входные данные	                выходные данные

1.2 1.3 1.5 1.6 1.7             Сцена стоит
-------------------------------------------------------
9.9 9.9 9.9 9.9 9.9              Сцена сломалась

*/

#include <stdio.h>

int main(){
double n, sum=0;
  for(int i=1;i<=5;i++){
scanf("%lf",&n);
  if(n<10){
    sum+=n
  }

  
  if(sum<20)
    printf("Сцена стоит");
  else
    printf("Сцена сломалась");

  return 0;
}