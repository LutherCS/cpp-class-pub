# Makefile for Separate Compilation

# *****************************************************
# Parameters to control Makefile operation

CXX = g++
CXXFLAGS = -std=c++14

# ****************************************************
# Entries to bring the executable up to date

exercise7: exercise7.o Schedule.o Course.o Section.o Date.o
	$(CXX) $(CXXFLAGS) -o exercise7.out exercise7.o Schedule.o Course.o Section.o Date.o

exercise7.o: exercise7.cpp
Schedule.o: Schedule.cpp
Course.o: Course.cpp
Section.o: Section.cpp
Date.o: Date.cpp

clean:
	rm *.o

run:
	./exercise7.out