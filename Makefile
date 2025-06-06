# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude

# Directories
SRC_DIR = src
INC_DIR = include
TEST_DIR = test
BIN_DIR = bin

# Source files
SRCS = $(SRC_DIR)/Author.cpp
TEST_SRCS = $(TEST_DIR)/AuthorTest.cpp

# Output binary
TEST_BIN = $(BIN_DIR)/AuthorTest

# Default target
all: $(TEST_BIN)

# Create bin directory if needed
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Build test binary
$(TEST_BIN): $(SRCS) $(TEST_SRCS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(SRCS) $(TEST_SRCS)

# Clean build files
clean:
	rm -rf $(BIN_DIR)

# Run test
test: $(TEST_BIN)
	./$(TEST_BIN)

