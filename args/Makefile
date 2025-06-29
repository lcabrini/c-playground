CC = gcc
OBJ = main.o
TARGET = args

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f *.o hello