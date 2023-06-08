WWW = -Werror -Wextra -Wall
G = gcc

all : s21_cat
	$(G) $(WWW) s21_cat.c s21_cat.h -o s21_cat

check: 
	clang-format -style=google -n *.c *.h

clean:
	rm -rf s21_cat