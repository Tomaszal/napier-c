CC = gcc

all: 1.out 2.out

# Executables (.out)
1.out: 1.c
	$(CC) -o $@ $^

2.out: 2.c
	$(CC) -o $@ $^

# Cleanup
clean:
	-rm -f *.out names.txt
