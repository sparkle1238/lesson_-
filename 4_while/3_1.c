/*
Необходимо вывести на консоль все степени числа 2 до числа 2048 включая его


входные данные 

выходные данные 
1 2 4 8 16 32 64 128 256 512 1024 2048


*/

#include <stdio.h>

int main(){
int n=1;


while(n<=2048){
  printf("%d ",n); 
  n=n*2;
 
}  


  return 0;
}