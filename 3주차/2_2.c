// 읽어 들인 정숫값을 5로 나눈 몫솨 나머지를 출력
#include <stdio.h>

int main(void)
{
    int n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    printf("n / 5는 %d입니다.\n", n / 5); 
    printf("n %% 5는 %d입니다.\n", n % 5); //형식지정자를 중복으로 써서 보이게 함

    return 0;
}
