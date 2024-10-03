 /*
Дано целое число , многократно сложить все его цифры до тех пор, пока в результате не будет только одна цифра, и вернуть ее. num



Пример 1:
Input: num = 38
Output: 2

Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 

Since 2 has only one digit, return it.

Пример 2:
Input: num = 0
Output: 0


*/

#include <stdio.h>

int sum(int n);


int addDigits(int num);