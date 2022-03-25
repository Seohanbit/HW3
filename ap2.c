#include <stdio.h>
#include <stdlib.h>
void main()
{

    printf("[-----[Seo han bit]   [2019038043]-----]\n");

    int list[5];                                        //5칸 배열 list 선언
    int *plist[5];                                      //5칸 짜리 포인터 배열 plist 선언

    list[0] = 10;                                       //list 배열의 첫번째 칸을 10으로 초기화
    list[1] = 11;                                       //list 배열의 두번째 칸을 10으로 초기화

    plist[0] = (int*)malloc(sizeof(int));               //plist의 첫번째 칸에 int크기 메모리 할당

    printf("list[0] \t= %d\n", list[0]);                //list[0]의 값을 출력
    printf("address of list \t= %p\n", list);           //list 배열의 첫번째 칸의 주소를 출력
    printf("address of list[0] \t= %p\n", &list[0]);    //list[0]의 주소 값을 출력
    printf("address of list + 0 \t= %p\n", list+0);     //list 배열의 첫번째 칸의 주소를 출력
    printf("address of list + 1 \t= %p\n", list+1);     //list 배열의 두번째 칸의 주소를 출력
    printf("address of list + 2 \t= %p\n", list+2);     //list 배열의 세번째 칸의 주소를 출력
    printf("address of list + 3 \t= %p\n", list+3);     //list 배열의 네번째 칸의 주소를 출력
    printf("address of list + 4 \t= %p\n", list+4);     //list 배열의 두번째 칸의 주소를 출력
    printf("address of list[4] \t= %p\n", &list[4]);    //list[4]의 주소값을 출력


    free(plist[0]);                                     //할당된 메모리 해제
    
}   