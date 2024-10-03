/*
написать  функцию, определяющую минимальный по модулю элемент полученного массива. Входной параметр – одномерный массив. Возвращаемое значение – число.

входные данные                        выходные данные
5
1 -2 3 4 -5                             1

10
0 -2 -1 9 -5 -6 50 -8 -9 -10            0

*/


// int min_in_arr(int arr[],int len);

#include <stdio.h> 
#include "1_0.h"


int min_in_arr(int arr[],int len);


int main(){

int arr[100],len,min=99;
   scanf("%d",&len) ;
    
  for(int i=0;i<len;i++){
      scanf("%d",&arr[i]);   
  }

  
  min=min_in_arr(arr,len);

  printf("%d",min);
  
  
    return 0;
}


int Fmin(int arr[],int len){
  int min=99;
  for(int i=0;i<len;i++){
      if(arr[i]<min){
          min=arr[i];
      }
  }
  return min;
}



int min_in_arr(int arr[],int len){
  for(int i=0;i<len;i++){
      arr[i] = abs( arr[i] ); //arr[0] = -1  abs(arr[0]) = 1
  }
  
  int min = Fmin(arr,len); //<-
  
  return min;
}
