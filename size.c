#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x));         //x에는 주소 값을 저장하기 때문에 크기가 4bytes이다
    printf("sizeof(*x) = %lu\n", sizeof(*x));       //*x역시 주소값을 저장하기 때문에 크기가 4bytes이다
    printf("sizeof(**x) = %lu\n", sizeof(**x));     //**x는 int형으로 선언했기 때문에 크기가 4bytes이다
}