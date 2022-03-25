#include <stdio.h>
#define MAX_SIZE 100                                        //MAX_SIZE를 100으로 고정

float sum(float [], int);                                   //함수의 내용을 미리 알려주는 역할
float input[MAX_SIZE], answer;                              //실수형 배열 input과 실수형 변수 answer을 전역으로 선언
int i;                                                      //정수형 변수 i를 전역변수로 선언

void main(void)
{

    printf("[-----[Seo han bit]   [2019038043]-----]\n");

    for(i=0; i < MAX_SIZE; i++)                             //조건이 i가 0부터 100보다 작은 수까지 반복이므로 0부터 99까지 반복
        input[i] = i;                                       //input[0]에는 0을 초기화 하는것처럼 배열의 순서에 맞게 그 순서의 숫자를 초기화
    /* for checking call by reference */

    printf("address of input = %p\n", input);               //input 배열의 첫번째 칸의 주소를 출력
    answer = sum(input, MAX_SIZE);                          //answer 변수에 sum 함수를 이용하여 값을 초기화
    printf("The sum is: %f\n", answer);                     //answer 변수의 값을 출력
}
    float sum(float list[], int n)                          //sum 함수
{
    printf("value of list = %p\n", list);                   //list에 넘어온 input의 주소를 출력
    printf("address of list = %p\n\n", &list);              //list의 주소 값 출력

    int i;                                                  //정수형 변수 i 선언
    float tempsum = 0;                                      //실수형 변수 tempsum을 선언함과 동시에 0으로 초기화

    for(i = 0; i < n; i++)                                  //n이 MAX_SIZE이기 때문에 i가 0부터 99까지 반복
        tempsum += list[i];                                 //tempsum = tempsum + list[i]
        
    return tempsum;                                         //계산된 tempsum 값을 리턴
}