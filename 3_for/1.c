/*
Условие
На уроке физкультуры все ученики рассчитываются на "первый-второй-третий".

Все "первые" ученики будут делать приседания, все "вторые" – отжимания, а все "третьи" побегут по кругу.

Дано количество учеников в классе. Выведите на экран порядковые номера тех, кто побежит по кругу.

Формат входных данных
Дано положительное целое число 2 < K < 60 – количество учеников в классе.

Формат выходных данных
Выведите на экран порядковые номера тех, кто побежит по кругу.


входные данные	выходные данные
25
  3
  6
  9
  12
  15
  18
  21
  24
--------------------------
10
  3
  6
  9

*/

// #include<stdio.h>

// int main(){
// int n;
// scanf("%d",&n);
// for(int i=1;i<=n;i+=1){            
//   if(i%3==0)
//     printf("%d\n",i);
// }






#include <stdio.h>

int main(){
int n,sum=0;
  scanf("%d",&n);
 for(int i=1;i<=n;i++){
  if(i%3==0)
    printf("%d ",i);
    sum=sum+i;
 }
  printf("\nСумма= %d",sum);


  return 0;
}

  
