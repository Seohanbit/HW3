#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
int main()
{

    printf("[-----[Seo han bit]   [2019038043]-----]\n");

    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student));
    //구조체의 크기를 출력하는데 총 19bytes가 아닌 24bytes가 출력되는걸로 보아 padding 되었음을 알 수 있다.
    printf("size of int = %ld\n", sizeof(int));                 //int형의 크기는 4bytes
    printf("size of short = %ld\n", sizeof(short));             //short형의 크기는 2bytes
    
    return 0;

}