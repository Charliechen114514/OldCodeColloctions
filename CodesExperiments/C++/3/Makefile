C = gcc
CXX = clang++
SOURCE_C = cadd.c
OBJECTS_C = cadd.o
SOURCE_CXX = cpptry.cpp
TARGET = cpptry
LDFLAGS_COMMON = -std=c++2a
all:
	$(C) -c $(SOURCE_C)
	$(CXX) $(SOURCE_CXX) $(OBJECTS_C) $(LDFLAGS_COMMON) -o $(TARGET)
clean:
	rm -rf *.o $(TARGET)