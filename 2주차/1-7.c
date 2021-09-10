//2개의 int형 변수를 실수값으로 초기화하고 출력
#include <stdio.h>

int main(void)
{
    int x = 3.4; //int형이기 때문에 .4가 잘린다
    int y = 5.7; //int형이기 때문에 .7이 잘린다
    int sum = 0;

    sum = x + y; 


    printf("합은 %d이다.\n", sum);

    return 0;
}
