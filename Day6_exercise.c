#include <stdio.h>

int main(void)
{
    int nAge = 0;

    int buffer_age[100];
    char name[100];

    printf("나이를 입력하세요. : ");
    if (fgets(buffer_age, sizeof(buffer_age), stdin) !=NULL) {
        if (sscanf(buffer_age, "%d", &nAge) != 1) {
            printf("정수를 입력해야 합니다.\n");
            return 1;
        }
    }

    printf("이름을 입력하세요. : ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        name[strcspn(name, "\n")] = '\0';
    }


    printf("당신의 나이는 %d살이고 이름은 '%s'입니다.\n", nAge, name);

    return 0;
}