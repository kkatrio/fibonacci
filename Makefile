CC = g++

CFLAGS = -Wall -O3

TARGET = fibonacci

all: $(TARGET)

$(TARGET) : main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(TARGET)
