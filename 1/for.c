/*

даны числа a b c. Необходимо вывести все числа от a до b, которые делятся на c

входные данные
1 10 2
выходные данные
2 4 6 8 10

*/
#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  if(a<b){
      for (int i=a; i<=b;i++){
        if(i%c==0){
          printf("%d",i);
        }    
      }
  }
  
  else if(a>b){
    for (int i=a; i>=b;i--){
      if(i%c==0){
        printf("%d",i);
      }
    }
  }


    

    return 0;
}
