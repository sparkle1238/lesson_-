/*

Условие
Следующая способность "Секретаря школьника" будет обработка запроса человека "Сколько у меня четвёрок?".

Так же, как в предыдущей задаче, сначала считываем число – сколько оценок будет введено. Затем также записываем их в массив.
Ваша задача – посчитать, сколько в этом массиве будет элементов, равных четырём.

Ответ вывести в понятном для пользователя виде, а именно фразой:

"В массиве ваших оценок оценка 4 встречается X раз(а)", где Х – это количество четвёрок в списке оценок.

Формат входных данных
Целое число N – сколько оценок пользователь хочет ввести.
Далее N целых чисел, каждое с новой строки.

Формат выходных данных
Ответ – фраза.



входные данные	выходные данные
3
2
4
4                В массиве ваших оценок оценка 4 встречается 2 раз(а)
==================================================================
2
5
5                В массиве ваших оценок оценка 4 встречается 0 раз(а)

*/

#include <stdio.h>

int main(){
int n, count=0;
int a[100];
  
scanf("%d",&n);

for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

for(int i=0;i<n;i++){
  if(a[i]%10==4){
    count++;
  }
}
printf("В массиве ваших оценок оценка 4 встречается: %d раз(а)",count);
  
  return 0;
}