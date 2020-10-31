CC := gcc

FCUR := -lncurses

start: main.c _FORCE
	$(CC) main.c -o main $(FCUR)

_FORCE:


clean:
	-rm -rf main
