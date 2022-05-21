CC = g++
CFLAGS = -g -Wall
OBJS = NewObject.o
TARGET = NewObject.out

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

NewObject.o: NewObject.cpp
