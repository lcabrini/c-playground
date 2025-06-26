CC = gcc
OBJ = main.o

hello: $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f *.o hello