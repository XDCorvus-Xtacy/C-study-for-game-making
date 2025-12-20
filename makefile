# 컴파일러
CC = clang
# 기본 출력 파일명
OUT = program

# ==========================================
# 특정 날짜 폴더 + 특정 C파일 빌드 및 실행
# 사용법: make DIR=Day36 FILE=main.c ARGS="인자들"
# ==========================================
default:
	@if [ -z "$(DIR)" ] || [ -z "$(FILE)" ]; then \
		echo "사용법: make DIR=폴더명 FILE=파일명.c ARGS=\"인자들\""; \
		exit 1; \
	fi
	$(CC) -g $(DIR)/$(FILE) -o $(OUT)
#	@echo ARGS = [$(ARGS)]
	@sh -c "./$(OUT) $(ARGS)"

# ==========================================
clean:
	rm -f $(OUT)