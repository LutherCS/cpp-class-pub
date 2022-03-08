# Parameters to control Makefile operation
project_path := $(abspath $(lastword $(MAKEFILE_LIST))/../)
PROJECT := $(notdir $(patsubst %/,%,$(dir $(project_path))))
CC = g++-11
CFLAGS = -c -Wall -std=c++20
LDFLAGS =
SRC_DIR = src
TEST_DIR = test
BUILD_DIR = build
SOURCES := $(PROJECT)_test.cpp $(filter-out ../$(SRC_DIR)/$(PROJECT)_main.cpp, $(wildcard ../$(SRC_DIR)/*.cpp))
OBJECTS := $(SOURCES:.cpp=.o)

# Default
all: $(SOURCES) test

# Make (link) an executable
# Must have objects
test: $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(PROJECT)_$@.out

# Make (compile) an object
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

# Remove object files and the executable
clean:
	rm -f *.o $(PROJECT)_test.out

# Run the executable
run:
	./$(PROJECT)_test.out

# Don't display instructions while running
.SILENT: run
