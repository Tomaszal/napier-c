CC = gcc

all: out asm

out: 1.out 2.out 3-4.out

asm: 1.asm 2.asm 3-4.asm

# Executables (.out)
1.out: 1.c
	$(CC) -o $@ $^

2.out: 2.c
	$(CC) -o $@ $^

3-4.out: 3-4.c
	$(CC) -o $@ $^

# Assembly files (.asm)
1.asm: 1.c
	$(CC) -S -o $@ $^

2.asm: 2.c
	$(CC) -S -o $@ $^

3-4.asm: 3-4.c
	$(CC) -S -o $@ $^

# Cleanup
clean:
	-rm -f *.out *.asm
