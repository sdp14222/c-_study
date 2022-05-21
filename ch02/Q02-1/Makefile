CC = g++
CFLAGS = -g -Wall
OBJS = Q3.o SwapPointer.o
TARGET = Q3.out

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

Q3.o: Q3.cpp

SwapPointer.o: SwapPointer.h SwapPointer.cpp

