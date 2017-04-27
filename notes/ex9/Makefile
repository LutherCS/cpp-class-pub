# Parameters to control Makefile operation
CC=g++
CFLAGS=-c -Wall -std=c++14
LDFLAGS=
SOURCES=exercise9.cpp LibraryItem.h Book.h Disc.h AudioDisc.h VideoDisc.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=exercise9

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

cleanall:
	rm *.o $(EXECUTABLE)

run:
	./$(EXECUTABLE)