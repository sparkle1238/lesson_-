/*

вам дан массив, содержащий различные числа в диапазоне , возвращает единственное число в диапазоне, которое отсутствует в массиве.numsn[0, n]

Пример 1:
Input: nums = [3,0,1] 
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.


Пример 2:
Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Пример 3:
Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
*/

#include <stdio.h>
int missingNumber(int* nums, int numsSize);

