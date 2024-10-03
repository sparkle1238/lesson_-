/*
найти индекс первого максивального и минимального числа в массиве

входные данные

5
3 5 2 1 4

выходные данные

1  3

  |   |
0 1 2 3 4
3 5 2 1 4

arr[ 3 = index ] = 1

*/

#include <stdio.h>

int main(){
int arr[1000];
int n;
  
  scanf("%d",&n);
  for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
  
    int max=-9999, min=999;
    int index_max=0, index_min=0;
    
  for(int index=0;index<n;index++){
    
    if( arr[index] > max ){
      max = arr[index];
      index_max = index;
    }
  
    if( arr[index] < min ){
      min = arr[index];
      index_min = index;
    }
  
  }
  
   printf( "%d %d",  index_max, index_min);
 
return 0;
  
}