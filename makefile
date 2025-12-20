# 컴파일러
CC = clang

# 디버그 옵션
CFLAGS = -g

# 기본 출력 파일명
OUT = program

default:
	@if [ -z "$(DIR)" ] || [ -z "$(FILE)" ]; then \
		echo "사용법: make DIR=폴더명 FILE=파일명.c ARGS=\"인자들\""; \
		exit 1; \
	fi
	$(CC) $(CFLAGS) $(DIR)/$(FILE) -o $(OUT)
	@sh -c "./$(OUT) $(ARGS)"

clean:
	rm -f $(OUT)