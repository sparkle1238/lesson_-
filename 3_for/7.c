/*
Условие
Напишите программу, которая считывает число x, а затем пишет его, поставив перед ним х пробелов.

Формат входных данных
Целое не отрицательное число x (гарантируется, что x не меньше нуля и не больше 9).

Формат выходных данных
Число x, перед которым стоит x пробелов.



входные данные	
0
выходные данные
0

==========

входные данные	
5
выходные данные
     5


*/
#include <stdio.h>

int main(){
int x;
scanf("%d",&x);

for(int i=0;i<x;i++){
    printf(" ");
}
     printf("%d",x);



    return 0;
}
