# Makefile for factorial program

# Compiler and flags
CC = gcc
CFLAGS = -Wall

# Target executable
TARGET = factorial

# Source files
SRC = main.c factorial.c

# Object files
OBJ = $(SRC:.c=.o)

# Header files
HEADERS = factorial.h

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to build object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up generated files
clean:
	rm -f $(TARGET) $(OBJ)
