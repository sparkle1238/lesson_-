/*
Условие
Необходимо вывести таблицу умножения на заданное число x
.

Формат входных данных
Вводится натуральное число x, которое не превосходит 10^5
.
Формат выходных данных
Программа должна вывести таблицу умножения от 1 до 10 на данное число x.

входные данные	выходные данные
7
                1 * 7 = 7
                2 * 7 = 14
                3 * 7 = 21
                4 * 7 = 28
                5 * 7 = 35
                6 * 7 = 42
                7 * 7 = 49
                8 * 7 = 56
                9 * 7 = 63
                10 * 7 = 70
*/

#include <stdio.h>

int main(){
int n,sum=0;

scanf("%d",&n);

for(int i=1;i<=10;i++){
    sum=i*n;
    printf("\n%d * %d = %d",i,n,sum); 
}

    return 0;
}