/*

Вам даны целое и целое число .n start

Определите массив, где (0-индексированный) и .nums nums[i] = start + 2 * i  
n == nums.length

Возвращает cумму всех элементов .nums


Пример 1:

Input: n = 5, start = 0
Output: 20
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 + 2 + 4 + 6 + 8) = 20.
Where "^" corresponds to bitwise XOR operator.

Пример 2:
Input: n = 4, start = 3
Output: 24
Explanation: Array nums is equal to [3, 5, 7, 9] where (3 + 5 + 7 + 9) = 8.
*/

#include <stdio.h>

int xorOperation(int n, int start);


// for(int i=0;i<n;i++)
//   nums[i] = start + 2 * i ;