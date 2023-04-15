# Define the source and output directories
SRC_DIR := src
BIN_DIR := bin

# Define the compiler and compiler flags
JC := javac
JFLAGS := -d $(BIN_DIR)

# Define the default target
.PHONY: all
all: $(BIN_DIR)/Main.class

# Define the target to compile the Java source files
$(BIN_DIR)/%.class: $(SRC_DIR)/%.java
	$(JC) $(JFLAGS) $<

# Define the target to clean up the compiled files
.PHONY: clean
clean:
	rm -rf $(BIN_DIR)/*

# Define the target to run the compiled program
.PHONY: run
run: $(BIN_DIR)/Main.class
	java -cp $(BIN_DIR) com.example.Main

