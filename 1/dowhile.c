

/*
найти максимальное число и минимальное в последовательности, последовательность заканчивается -1, -1 не считать

вхоные данные
3 2 1 4 1 54 8 2 1 23 34 2 23 9 99 -1

выходные данные 
99 1

*/
#include<stdio.h>


int main (){
int n,max=-9999,min=999;

do{
  scanf("%d",&n);
  
  if(n>max){
    max=n;
  }
  
  if(n<min){
    min=n;
  }

}while(n!= -1);

  printf("%d %d",min,max);


  
return 0;
}