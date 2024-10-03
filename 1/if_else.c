/*
найти максимум и минимум из 3 чисел

входные данные 
3 5 7

выходные данные
7 3

*/




#include <stdio.h>
#include <limits.h>
//min  = 2 147 483 647
//max = -2 147 483 647


int main(){
int a=5,b=3,c=7,min=INT_MAX,max=INT_MIN;
  // поиск минимального 
  /*
  if(a<b)
    min = a;
  else
    min = b;

  if(c<min)
    min=c; 
  */
  
  
  if(a<b && a<c){
    min=a;
  }
  else if(b<a && b<c){
    min=b;
  }
  else{
    min=c;
  }
  
  //поиск максимального 
  if (a>b && a>c){
    max=a;
  }
  else if (b>a && b>c){
      max=b;
    }
  else{
    max=c;
  }
  printf("%d %d",max,min);
  

  return 0;
}




