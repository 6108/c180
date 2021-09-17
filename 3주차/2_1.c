//읽어 들인 정숫값에 10을 사칙연산한 값 출력
#include <stdio.h>

int main(void)
{
    int n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    printf("10을 더하면 %d입니다.\n", n + 10); //덧셈
    printf("10을 빼면 %d입니다.\n", n - 10); //뺄셈
    printf("10을 곱하면 %d입니다.\n", n * 10); //곱셈
    printf("10을 나눈 몫은 %d입니다.\n", n / 10); //나눗셈
    printf("10을 나눈 나머지는 %d입니다.\n", n % 10); //나머지

    return 0;
}
