CC = g++
CFLAGS = -g -Wall
OBJS = Q1.o Calc.o
TARGET = Q1.out

all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

Q1.o: Q1.cpp

Calc.o: Calc.h Calc.cpp