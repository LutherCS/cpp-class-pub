# Parameters to control Makefile operation
PROJECT=exercise4
CC=g++
CFLAGS=-c -Wall -std=c++14
LDFLAGS=
SOURCES=$(PROJECT)_catch.cpp $(PROJECT)_test.cpp
OBJECTS=$(SOURCES:.cpp=.o)

# Default
all: $(SOURCES) $(PROJECT)_test

# Make (link) an executable
# Must have objects
$(PROJECT)_test: $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@.out

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
