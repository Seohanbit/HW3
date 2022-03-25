#include <stdio.h>
#include <stdlib.h>
void main()
{
    
        
    
    int list[5];                                                //5칸 짜리 정수형 배열 list 선언
    int *plist[5] = {NULL,};                                    //5칸 짜리 정수형 포인터 배열 plist 선언 후 null로 초기화

    plist[0] = (int *)malloc(sizeof(int));                      //plist[0]에만 포인터 배열에 4byte로 메모리 할당

    list[0] = 1;                                                //list 배열의 첫번째 칸의 값을 1로 초기화
    list[1] = 100;                                              //list 배열의 두번째 칸의 값을 100으로 초기화
    *plist[0] = 200;                                            //포인터 배열 plist의 첫번째 칸의 값을 200으로 초기화

    printf("value of list[0] = %d\n", list[0]);                 //list[0]의 값 출력
    printf("address of list[0] = %p\n", &list[0]);              //list[0]의 주소 출력
    printf("value of list = %p\n", list);                       //list는 &list[0]과 같은 의미이다. 사실상 주소값 출력
    printf("address of list (&list) = %p\n", &list);            //list의 주소 출력

    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]);                 //list[1]의 값을 출력
    printf("address of list[1] = %p\n", &list[1]);              //list[1]의 주소 출력
    printf("value of *(list+1) = %d\n", *(list + 1));           //*(list+1)은 list[1]과 같은 의미 즉 list[1]의 값 출력 
    printf("address of list+1 = %p\n", list+1);                 //list+1은 &list[1]과 같은 의미 즉 list[1]의 주소 출력

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);             //아까 초기화한 값인 200을 출력
    printf("&plist[0] = %p\n", &plist[0]);                      //plist[0]의 주소 출력
    printf("&plist = %p\n", &plist);                            //plist의 주소 출력
    printf("plist = %p\n", plist);                              //plist 포인터 배열의 첫 번째 칸의 주소 출력 
    
    printf("plist[0] = %p\n", plist[0]);                        //plist[0]이 가르키고 있는 곳의 주소 출력
    printf("plist[1] = %p\n", plist[1]);                        //메모리 할당이 안된 곳이라 NULL값 출력
    printf("plist[2] = %p\n", plist[2]);                        //메모리 할당이 안된 곳이라 NULL값 출력
    printf("plist[3] = %p\n", plist[3]);                        //메모리 할당이 안된 곳이라 NULL값 출력
    printf("plist[4] = %p\n", plist[4]);                        //메모리 할당이 안된 곳이라 NULL값 출력


    free(plist[0]);                                             //할당 받은 메모리를 다시 해제

}