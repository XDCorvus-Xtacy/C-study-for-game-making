/*
main() 함수의 인자로 두 바이너리 파일의 경로를 입력받아 바이너리 모드로 열고,
원본 파일의 내용을 읽어들여 대상 파일로 복사하는 프로그램을 작성하세요. 단,
복사의 진행 과정을 백분율로 화면에 출력하고, 한번에 4KB 단위로 복사합니다.
그리고 대상 파일이 존재 유무에 상관없이 무조건 생성하며, 파일의 크기가 최대
100MB 이상인 경우는 고려하지 않습니다.
*/

/*
난 못 풀어서 gpt한테 맡긴 답 적어놓음
*/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096   // 4KB

int main(int argc, char *argv[])
{
    FILE *fpSrc = NULL;
    FILE *fpDst = NULL;
    unsigned char buffer[BUFFER_SIZE];
    long fileSize = 0;
    long copiedSize = 0;
    size_t readSize = 0;
    int prevPercent = -1;

    // 인자 개수 확인
    if (argc != 3)
    {
        printf("사용법: %s <원본 파일> <대상 파일>\n", argv[0]);
        return 1;
    }

    // 원본 파일 열기 (바이너리 읽기)
    fpSrc = fopen(argv[1], "rb");
    if (fpSrc == NULL)
    {
        perror("원본 파일 열기 실패");
        return 1;
    }

    // 대상 파일 열기 (바이너리 쓰기, 무조건 생성)
    fpDst = fopen(argv[2], "wb");
    if (fpDst == NULL)
    {
        perror("대상 파일 열기 실패");
        fclose(fpSrc);
        return 1;
    }

    // 원본 파일 크기 구하기
    fseek(fpSrc, 0, SEEK_END);
    fileSize = ftell(fpSrc);
    fseek(fpSrc, 0, SEEK_SET);

    // 파일 복사
    while ((readSize = fread(buffer, 1, BUFFER_SIZE, fpSrc)) > 0)
    {
        fwrite(buffer, 1, readSize, fpDst);
        copiedSize += readSize;

        // 진행률 계산
        int percent = (int)((double)copiedSize / fileSize * 100);

        // 퍼센트가 바뀔 때만 출력
        if (percent != prevPercent)
        {
            printf("\r진행률: %d%%", percent);
            fflush(stdout);
            prevPercent = percent;
        }
    }

    printf("\n복사 완료!\n");

    fclose(fpSrc);
    fclose(fpDst);

    return 0;
}