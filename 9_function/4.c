/*
написать функцию которая вернет разницы максимальной и минимальной числа в массиве


входные данные              выходные данные
5
1 2 3 4 5                   4

6
144 130 6 180 31 90         174


*/

// int max_min_arr(int arr[],int len);

#include <stdio.h>


int max_min_arr(int arr[],int n);

int main(){
  int mas[100],n=0,k;
  scanf("%d",&n);
  
  for(int i=0;i<n;i++)
    scanf("%d",&mas[i]);
  
  k=max_min_arr(mas,n);
  
  printf("%d",k);

  return 0;
}


int min_arr(int mas[], int len){
  int min = 999;
    for(int i=0;i<len;i++){
      if(mas[i]<=min){
          min=mas[i];
      }
  }
  return min;
}


int max_arr(int mas[], int len){
  int max=0;
  for(int i=0;i<len;i++){
      if(mas[i]>max){
          max=mas[i];
      }
  }
  return max;
}


int max_min_arr(int mas[], int n){
  int max=max_arr(mas,n),
      min=min_arr(mas,n),
      raznCh=max-min;
  return raznCh;
}