%.o: %.c
	gcc -c $^ -o $@

solver: solver.o
	gcc $^ -o solver -lm
