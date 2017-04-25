# Parameters to control Makefile operation
CC=g++
CFLAGS=-c -Wall -std=c++14
LDFLAGS=
SOURCES=exercise8.cpp Employee.cpp HourlyEmployee.cpp SalariedEmployee.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=exercise8

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

cleanall:
	rm *.o $(EXECUTABLE)

run:
	./$(EXECUTABLE)