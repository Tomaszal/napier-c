CC = gcc

all: 2.out 3.out

# Executables (.out)
2.out: 2.c
	$(CC) -o $@ $^

3.out: 3.c
	$(CC) -o $@ $^

4.out: 4.c
	$(CC) -o $@ $^

# Cleanup
clean:
	-rm -f *.out
