/*
Условие
Аркадия подключили к работе над проектом IT поддержки "Ашана".

Новинка сезона – это отдел роскошных товаров. Дорогие сыры, импортные напитки высокого качества и многое другое. Клиенты хотели бы при поиске нужного товара видеть не "сначала самое дешёвое", а "сначала самое дорогое".

Нужно написать программу, которая отсортирует список цен на товары по принципу от большего к меньшему.

Воспользуйтесь алгоритмом сортировки выбором и внесите туда модификацию, в какую сторону идёт сортировка.


входные данные                            	  выходные данные
10
490 883 955 344 438 129 247 875 602 621       955 883 875 621 602 490 438 344 247 129
=====================================================================================
10
6 2 8 7 1 9 8 8 7 8                            9 8 8 8 8 7 7 6 2 1

*/

#include <stdio.h>

int main(){
  int mas[100],n;
  // ввод значений
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",&mas[i]);

  
  
  for(int j=0;j<n;j++){
    int index_max=j;
    int max = mas[j];
    
    for(int i=j;i<n;i++)
      if(mas[i]>max){
        max=mas[i];
        index_max=i;
      }
  
      int temp=mas[index_max];
          mas[index_max]=mas[j];
          mas[j]=temp;
  }
  
// вывод 
   for(int i=0;i<n;i++)
    printf("%d ",mas[i]);
  printf("\n");


  return 0;
}