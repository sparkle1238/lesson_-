/*
Условие
Ребята во дворе играют в очень простую, но занимательную игру.

Все по очереди называют числа по порядку. Если число кратно 7 или содержит 7 (например, 21 или 37), то называть число вслух нельзя. Нужно хлопнуть в ладоши.

Кто запутался и назвал число вслух – выбывает из игры!

Даны два числа A – начало, B – конец. Выведите на экран развитие игры.

Если число можно назвать, то выводите на экран само число, если нельзя, то только слово "хлоп".

Формат входных данных
Даны два целых числа 0 ≤ A ≤ B ≤ 100.


Формат выходных данных
История игры с числами от A до B. Каждое число на новой строчке.

Примечания
Попробуйте сыграть с одногруппниками на перемене :D.

входные данные	    выходные данные
6
18
              6
              хлоп
              8
              9
              10
              11
              12
              13
              хлоп
              15
              16
              хлоп
              18
=========================
1
5
              1
              2
              3
              4
              5

*/

#include<stdio.h>



int main(){
int a,b;
  for(int i=a;i<=b;i++){
    if(i%7==0 || i % 10 == 7 || i / 10 == 7)
      printf("xlop");
    else
      printf("%d",i);
  }

  
  return 0;
}
