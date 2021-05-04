CC = gcc
CFLAGS = -I .
TARGET = converter

default: $(TARGET)

$(TARGET):	main.o conversion.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o conversion.o

main.o: main.c conversion.h
	$(CC) $(CFLAGS) -c main.c

conversion.o: conversion.c conversion.h
	$(CC) $(CFLAGS) -c conversion.c

clean:
	rm -f $(TARGET) *.o
