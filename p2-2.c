#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{

    printf("[-----[Seo han bit]   [2019038043]-----]\n");

    int one[] = {0, 1, 2, 3, 4};                            //one이라는 배열에 값 초기화
    printf("one = %p\n", one);                              //배열 one의 첫번째 칸 주소 출력
    printf("&one = %p\n", &one);                            //배열 one의 시작 주소를 출력
    printf("&one[0] = %p\n", &one[0]);                      //one[0]의 주소를 출력
    printf("\n");
    print1(&one[0], 5);                                     //one[0]의 주소와 5를 함수로 보냄
    return 0;
}
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");                   
    for (i = 0; i < rows; i++)                              //rows에 5를 받아왔으므로 i가 0부터 4까지
        printf("%p \t %5d\n", ptr + i, *(ptr + i));         //ptr에 one의 시작 주소를 받아왔기 때문에 +i를 하면 i번째 주소을 출력하고 i번째 값을 출력 
    printf("\n");
}