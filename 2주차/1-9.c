//읽어들인 정숫값에서 6을 뺀 값을 출력
#include <stdio.h>

int main(void)
{
    int no;

    printf("정수값을 입력하세요: ");
    scanf("%d", &no);

    printf("%d에서 6을 빼면 ", no);
    printf("%d입니다.\n", no - 6);

    return 0;
}
