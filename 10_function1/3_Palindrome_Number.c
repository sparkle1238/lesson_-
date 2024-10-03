/*
При заданном целом числе X верните 1 если он является полиндромом и верните 0 в противном случае 



Пример 1:

Input: x = 1234321
Output: 1
Explanation: 121 reads as 121 from left to right and from right to left.

Пример 2:
Input: x = -121
Output: 0

Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Пример 3:
Input: x = 10

Output: 0
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


*/
#include <stdio.h>

int isPalindrome(int x);

int main(){
  int a;
  scanf("%d",&a);
  int ans =  isPalindrome(a);
  printf("%d", ans );
  return 0;
}

int isPalindrome(int x){

    int y=0, x_rezerv=x ;

     if(x<0){
       return 0;
     }

    while(x!=0){
      y=x%10 + y*10;
      x=x/10;
    }
  
  //x = 0

    
  if(x_rezerv == y)
    return 1;
  else
    return 0;
  
}


