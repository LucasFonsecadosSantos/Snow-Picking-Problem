#
# written by Lucas Fonseca dos Santos.
#
# SNOW PICKING PROBLEM SOLUTION ALGORITHM
#
# FEDERAL UNIVERSITY OF LAVRAS - Algorithms in Graph.
# Mayron Moreira
# used in pratical project 1.
#
rwildcard = $(foreach d, $(wildcard $1*), $(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))

SOURCE_FILES = $(call rwildcard, ,*.cpp)
OBJECT_FILES = $(SOURCE_FILES:.cpp=.o)

all: build build/main clean_objects

build:
	mkdir -p build

build/main: $(OBJECT_FILES)
	g++ -g $^ -o $@

%.o: %.cpp
	g++ -g -c $^ -o $@

clean_objects: $(OBJECT_FILES)
	rm $^