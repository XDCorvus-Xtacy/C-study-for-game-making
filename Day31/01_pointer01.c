#include <stdio.h>

int main(void)
{
    int nData = 10;
    printf("%s\n", "nData");
    
    //변수 nData에 들어 있는 값을 출력
    printf("%d\n", nData);
    //변수 nData의 메모리 주소를 출력
    printf("%p\n", &nData);
    return 0;
}

/*
이름이 nData인 부호가 있는 32비트 정수형 메모리의 실제 주소는 0x0012FF28
이고, 그 안에 저장된 정보를 해석하면 10진 정수인 10이다.
*/