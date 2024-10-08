/*
Условие
Напишите функцию void push(int data[], int* size, int value), которая принимает на вход массив data размера size и добавляет в конец массива указанное значение value. Не забудьте также поменять размер массива.

Формат входных данных
В первой строке входных данных вводится натуральное число N, не превосходящее 10000, – количество элементов в массиве.

В следующей строке вводятся N целых чисел. Каждое число не превосходит по модулю 109.

В последней строке вводится целое число, не превосходящее по модулю 109, – добавляемый элемент.

Формат выходных данных
Выведите измененный массив.


Примеры
входные данные	выходные данные
2
-6 10 
-1              -6 10 -1 

2
10 -1 
7                 10 -1 7 

*/

#include <stdio.h>

void push(int data[], int* n, int value);

int main(){
int data[100], n,a;

scanf("%d",&n); // n = 5
  
for(int i=0;i<n;i++) // 0 1 2 3 4 
  scanf("%d",&data[i]);

  scanf("%d",&a);

// логика
  push(data, &n, a);// n = 6

  //вывод
  for(int i=0;i<n;i++) // 0 1 2 3 4 5
    printf("%d",data[i]);

  
  return 0;
}

void push(int data[], int* n, int value){

  data[*n] = value;
  *n+=1;

}
