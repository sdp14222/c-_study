CC = g++
CFLAGS = -g -Wall
OBJS = Q1.o
TARGET = Q1.out

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

Q1.o: Q1.cpp
