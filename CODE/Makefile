# Variáveis
CC = gcc
CFLAGS = -Wall
TARGET = main

# Regras
all: $(TARGET)

$(TARGET): main.o ArvoreBin.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o ArvoreBin.o

main.o: main.c ArvoreBin.h
	$(CC) $(CFLAGS) -c main.c

ArvoreBin.o: ArvoreBin.c ArvoreBin.h
	$(CC) $(CFLAGS) -c ArvoreBin.c

clean:
	rm -f *.o $(TARGET)
