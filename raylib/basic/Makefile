CC = gcc
CFLAGS = -Wall
LDFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
TARGET = basic
OBJ = main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(LDFLAGS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(TARGET) *.o


