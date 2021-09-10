//읽어들인 3개의 정수갑의 덧셈 결과를 변수에 저장하고 출력
#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int add; //합

    puts("3개의 정숫값을 입력하세요.");
    printf("정수 1: ");
    scanf("%d", &n1);
    printf("정수 2: ");
    scanf("%d", &n2);
    printf("정수 3: ");
    scanf("%d", &n3);

    add = n1 + n2 + n3;

    printf("이 세 값의 합은 %d입니다.\n", add);

    return 0;
}
