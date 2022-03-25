#include <stdio.h>

struct student1 {                                       //student1 구조체 정의
    char lastName;
    int studentId;
    char grade;
};

typedef struct {                                        //typedef를 사용하여 student2의 별칭을 가진 구조체 정의
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    struct student1 st1 = {'A', 100, 'A'};              //구조체의 각 변수에 A,100,A를 넣음

    printf("st1.lastName = %c\n", st1.lastName);        //구조체 st1의 lastname 출력
    printf("st1.studentId = %d\n", st1.studentId);      //구조체 st1의 studentID 출력
    printf("st1.grade = %c\n", st1.grade);              //구조체 st1의 grade 출력

    student2 st2 = {'B', 200, 'B'};                     //student2 st2 구조체에 B,200,B를 넣음

    printf("\nst2.lastName = %c\n", st2.lastName);      //st2 구조체의 lastname 출력
    printf("st2.studentId = %d\n", st2.studentId);      //st2 구조체의 studentID 출력
    printf("st2.grade = %c\n", st2.grade);              //st2 구조체의 grade 출력

    student2 st3;                                       //student2 구조체 st3 선언

    st3 = st2;                                          //st3를 st2로 초기화

    printf("\nst3.lastName = %c\n", st3.lastName);      //st3 구조체의 lastname 출력
    printf("st3.studentId = %d\n", st3.studentId);      //st3 구조체의 studentID 출력
    printf("st3.grade = %c\n", st3.grade);              //st3 구조체의 grade 출력

    // /* equality test */
    // if(st3 == st2) /* not working */
    //     printf("equal\n");
    // else
    //     printf("not equal\n");
    // return 0;
}