#include <stdio.h>

int main(int argc, char* argv[])
{
    register int i = 0;
    printf("%d\n", i);
    printf("%p\n", &i);
    return 0;
}

/*
레지스터 변수는 CPU의 일부이므로 별도로 주소가 없다.
레지스터는 고유명사로 식별
*/