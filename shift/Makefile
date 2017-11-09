CC = gcc
CFLAGS = -W -Wall
TARGET = shift
OBJECTS = shift.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o shift
