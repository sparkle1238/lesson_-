/*
написать функцию, получающую одномерный массив и целое число. Функция должна возвращать индекс первого элемента массива, значение которого равно полученному числу. Если такого элемента нет, то возвращается -1

входные данные           выходные данные
5
1 2 3 4 5                3
4

10
1 2 3 4 5 6 7 8 9 10    -1
100

*/

#include <stdio.h>

int serch(int arr[],int len, int k);

int main(){
  int arr[100],n,k;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  scanf("%d",&k);

  int i=serch(arr,n,k);
  
  printf("%d",i);
  
  return 0;
}

int serch(int arr[],int len, int k){
  for(int i=0;i<len;i++){
    if(arr[i]==k){
      return i;
    }
  }
  return -1;
}
