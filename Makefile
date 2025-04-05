# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Iheader

# Directories
SRC_DIR = src
HEADER_DIR = header
BUILD_DIR = build
BIN = $(BUILD_DIR)/student_app

# Source files and object files
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Default target
all: $(BIN)

# Link object files into final binary
$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Compile .c to .o inside build/
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure build directory exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean all build files and executable
clean:
	rm -rf $(BUILD_DIR)

# Run the executable
run: all
	./$(BIN)
